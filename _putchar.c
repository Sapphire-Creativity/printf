#include <unistd.h>

/**
 * _putchar - ========
 * @c: =====
 * Return: On success 1.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
