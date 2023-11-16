#ifndef MAIN_H
#define MAIN_H

#define BUFSIZE 1024

#include <stdlib.h>
#include <stdarg.h>

int (*selector(char c))(va_list arg);
int handle_pointeraddress(va_list arg);
int ROT13(va_list arg);
int _putchar(char c);
int _printf(const char *format, ...);


#endif
