#include "main.h"

/**
 * print_i_d - prints an integer
 * @args: list of arguments
 * Return: int , lenght
 */
int print_integer(va_list args)
{
	int arg = va_arg(args, int);
	int pow = 1;
	int len = 0;
	unsigned int num;

	if (arg < 0)
	{
		_putchar('-');
			arg *= -1;
		len++;
	}
	num = va_arg(args, unsigned int);
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
