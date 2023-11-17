#include "main.h"

/**
 * _print_i - Prints an integer
 * @args: integer to print
 * Return: number of digits printed
 */

int _print_i(va_list args)
{
	int n = va_arg(args, int);
	int num = n;
	int digit, i = 0;
	int isNegative = 0;
	int exp = 1;

	if (n < 0)
	{
		_putchar('-');
		isNegative = 1;
		num = -num;
	}

	while (num / exp >= 10)
	{
		exp *= 10;
	}

	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num %= exp;
		exp /= 10;
		i++;
	}

	if (isNegative)
	{
		i++;
	}

	return (i);
}

/**
 * _print_d - Prints decimal
 * @args: argument to print
 * Return: integer
 */

int _print_d(va_list args)
{
	int n = va_arg(args, int);
	int num = n;
	int digit, i = 0;
	int isNegative = 0;
	int exp = 1;

	if (n < 0)
	{
		_putchar('-');
		isNegative = 1;
		num = -num;
	}

	while (num / exp >= 10)
	{
		exp *= 10;
	}

	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num %= exp;
		exp /= 10;
		i++;
	}

	if (isNegative)
	{
		i++;
	}

	return (i);
}
