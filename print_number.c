#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_number - prints an integer character by character
 * @num: integer to print
 * Return: number of character printed
 */
int print_number(int num)
{
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;

	}
	if (num / 10)
		count += print_number(num / 10);
	_putchar((num % 10) + '0');
	count++;
	return (count);
}
