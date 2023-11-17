#include "main.h"

/**
 * _print_integer - Prints an integer
 * @n: integer to print
 * Return: number of digits printed
 */

int _print_integer(int n)
{
	int i = 0;
	int digit;
	int exp = 1;
	int num;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		i++;
	}

	num = n;

	while (num / 10 > 0)
	{
		exp *= 10;
		num /= 10;
	}

	while (exp > 0)
	{
		digit = n / exp;
		_putchar(digit + '0');
		n -= digit * exp;
		exp /= 10;
		i++;
	}

	_putchar(n + '0');

	return (i + 1);
}

/**
 * _print_i - prints integer
 * @args: argument to print
 * Return: number of digits printed
 */

int _print_i(va_list args)
{
	int n = va_arg(args, int);

	return (_print_integer(n));
}

/**
 * _print_d - prints decimal
 * @args: argument to print
 * Return: number of digits printed
 */

int _print_d(va_list args)
{
	int n = va_arg(args, int);

	return (_print_integer(n));
}
