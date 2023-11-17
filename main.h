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
int reverse(va_list arg);
int _print_binary(va_list val);
int _print_char(va_list val);
int _print_s(va_list val);
int _strlen(const char *s);
int _strlenc(const char *s);
int _print_percent(va_list args);

#endif
