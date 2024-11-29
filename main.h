#ifndef main_h
#define main_h
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct op - structure to map a specifier
 * @specifier: the specifier
 * @func: pointer that manages the specifier
 */

typedef struct op
{
	char *specifier;
	int (*func)(va_list args);
} op_t;

int _printf(const char *format, ...);
int print_integer(va_list args);
int _putchar(char c);
int print_char(va_list args);
int print_percent(va_list args);
int (*get_op_function(char specifier))(va_list);
int specifier(const char c, va_list args);
int print_string(va_list args);
int print_i_d(va_list args);
#endif
