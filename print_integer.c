#include "main.h"

/**
 * print_integer - prints an integer
 * @args: list of arguments
 * Return: int , lenght
 */
int print_integer(va_list args)
{
	long int num = va_arg(args, int);
	int pow = 1;
	int len = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		len++;
	}
	if (num == 0)
	{
		_putchar('0');
			return (len + 1);
	}
	while (num / pow >= 10)
		pow *= 10;
	while (pow > 0)
	{
		_putchar((num / pow) + '0');
		num %= pow;
		pow /= 10;
		len++;
	}
	return (len);
}
