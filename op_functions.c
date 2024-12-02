#include "main.h"
/**
 * print_char - displays the character selected
 * @args: current char to print
 *
 * Return: number of printed characters
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
/**
 * print_string - display a string with i number of chars
 * @args: list or arguments to print since its a str
 *
 * Return: number of printed characters
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	if (!str)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
/**
 * print_percent - displays a character '%'
 * @args: current char to print
 *
 * Return: Number of printed character
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
