#include "main.h"

/**
 * _print_char - a function that prints a char
 * @val: arguments.
 * Return: 1.
 */
int _print_char(va_list val)
{
	char character = va_arg(val, int);

	_putchar(character);
	return (1);
}

