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
	else if (c == 'b')
		return (&_print_binary);
	else if (c == 'c')
		return (&_print_char);
	else if (c == 's')
		return (&_print_s);
	else if (c == '%')
		return (&_print_percent);
	else if (c == 'i')
		return (&_print_i);
	else if (c == 'd')
		return (&_print_d);
	else if (c == 'S')
		return (&_print_S);

	return (0);

}
