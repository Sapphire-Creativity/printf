#include "main.h"
/**
 * _print_S - prints a string with special handling
 * @args: argument to print
 * Return: number of charaacters printed
 */

int _print_S(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0;

	if (s == NULL)
	{
		_printarg("null)");
		return (0);
	}

	for (; *s != '\0'; s++)
	{
		if (*s > 31 && *s < 127)
		{
			+putchar(*s);
			count++;
		}

		else
		{
			_putchar('\\');
			_putchar('x');
			if (*s < 16)
			{
				_putchar('0');
				count++;
			}
			count += _puthex(*s);
		}
	}
	return (count);
}
