#include "main.h"

/**
 * handle_pointeraddress - =====
 * @arg: ========
 * Return: int
 */
int handle_pointeraddress(va_list arg)
{

	int counter = 0;
	unsigned int a[16];
	unsigned int i = 0, sum = 0;
	unsigned long nint, m = 1152921504606846976;
	char *str = "(nil)";

	nint = va_arg(arg, unsigned long);
	if (nint == 0)
	{
		for (; str[i]; i++)
		{
			_putchar(str[i]);
			counter++;
		}
		return (counter);
	}
	_putchar('0');
	_putchar('x');
	counter = 2;

	a[0] = nint / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (nint / m) % 16;
	}
	for (i = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			counter++;
		}
	}
	return (counter);
}
