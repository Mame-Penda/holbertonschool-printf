#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - function that prints a given character or string.
 * @format: holds the caracter or the string to print
 * Return: Total number of characters printed
 **/
int printf(const char *format, ...)
{
	int i = 0, len = 0;
	int j;
	va_list args;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == 'c')
				len += _putchar(va_arg(args, int));
			else if	(format[i] == 's')
			{
				char *str = va_arg(args, char *);

				if (!str)
					str = "(null)";
				for (j = 0; str[j]; j++, len++)
					_putchar(str[j]);
			}
			else if (format[i] == '%')
				len += _putchar('%');
			else
			{
				len += _putchar('%')
				len += _putchar(format[i]);
			}
		}
		else
		{
			len += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}
