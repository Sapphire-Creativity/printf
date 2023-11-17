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
	int len;
	int len2;
len = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
len2 =_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
_printf("%!\n");
printf("%d = %d", len , len2);

return (0);
}
