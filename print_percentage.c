#include "main.h"

/**
 * _percentage - writes the character c (%)
 * @args: the character that needs to be printed
 *
 * return: On succes 1
 * On error -1 is returned
 */

int _percentage(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}	
