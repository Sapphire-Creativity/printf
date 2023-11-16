#include "main.h"
/**
 * selector - =======
 * @c: ======
 * Return: ===
 */
int (*selector(char c))(va_list arg)
{

	if (c == 'p')
		return (&handle_pointeraddress);
	else if (c == 'R')
		return (&ROT13);
	else if (c == 'r')
		return (&reverse);


	return (0);

}
