#include "main.h"
/**
 * ROT13 - ======
 * @arg: =========
 * Return: =======
 */
int ROT13(va_list arg)
{
	int i, count, j;
	char arr1[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char arr2[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *value = va_arg(arg, char *);

	count = 0;
	if (!value)
	{
		return (0);
	}

	for (i = 0; value[i] != '\0'; i++)
	{
		for (j = 0; arr1[j] != '\0'; j++)
		{
			if (value[i] == arr1[j])
			{
				_putchar(arr2[j]);
				count++;
				break;
			}
		}
		if (arr1[j] == '\0')
			count += _putchar(value[i]);
	}
	return (count);
}
