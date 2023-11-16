#include "main.h"

/**
 * reverse - =====
 * @arg: ====
 * Return: ====
 */
int reverse(va_list arg)
{
	int i, j = 0;
	char *str = va_arg(arg, char *);

	while (str[j])
		j++;

	for (i = (j - 1); i >= 0; i--)
		_putchar(str[i]);
	return (j);

}
