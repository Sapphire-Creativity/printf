#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	void *addr;

	addr = (void *)0x7ffe637541f0;

	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);

printf("%d",	_printf("%r"));

_printf("%R\n", "ab");


_printf("%r\n", "pascal");
return (0);
}
