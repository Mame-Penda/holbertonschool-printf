#include "main.h"

/**
 * _char - write the character c
 * @args: The character that needs to be printed.
 *
 * Return: On sucess 1.
 * On error -1 is returned.
 */
int _char(va_list args)
{
	char c = va_arg(args, int);
	return (_putchar(c));
}
