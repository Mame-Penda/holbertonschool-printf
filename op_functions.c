#include "main.h"
/**
 * print_char - displays the character selected
 * @args: list or arguments to print
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
 * @args: list or arguments to print
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
 * @args: List of arguments not used
 * 
 * Return: Number of printed character
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
/**
 * print_integer - display an integer
 * @args: List of arguments
 *
 * Return: number of arguments not used
 */
int print_integer(va_list args)
{
	long int temps, value = va_arg(args, int);
	int multiplier = 1, char_count = 0;

	if (value < 0)
	{
		char_count += _putchar ('-');
		value = -value;
	}
	if (value < 10)
		return(char_count += _putchar(value + '0'));
	temps = value;
	while (temps > 9)
	{
		multiplier *= 10;
		temps /= 10;
	}
	while (multiplier >= 1)
	{
		char_count += _putchar(((value / multiplier) % 10) + '0');
		multiplier /= 10;
	}
	return (char_count);
}
