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


	return (0);

}
