#include "main.h"

/**
 * _print_s - prints a string
 * @val: argument
 * Return: length of the string
 */
int _print_s(va_list val)
{
	char *s;
	int len = 0;

	s =  va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}

	return (len);
}
