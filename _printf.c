#include "main.h"
int _printf(const char *format, ...);
/**
 * _printf - ========
 * @format: =======
 * Return: =====
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int count = 0;


	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (i = 0; format[i]; i++)
	{

		if (format[i] == '%')
		{
			if (format[i + 1] == 'p')
			{
				count += selector(format[i + 1])(args);
				i++;
			}
			else if (format[i + 1] == 'R')
			{
				count += selector(format[i + 1])(args);
				i++;
			}
			else
			{
				count += _putchar(format[i]);
				i++;
				count += _putchar(format[i]);
			}
		}

		else
		{
			count += _putchar(format[i]);
		}


	}
	va_end(args);
	return (count);
}
