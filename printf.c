#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _print(const char *format, ...)
{
	va_list args;
	int i, count = 0;

	if (!format)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
				count += print_number(va_arg(args, int));
			else if (format[i] == '%')
				count += _putchar('%');
			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
			count += _putchar(format[i]);
	}
	va_end(args);
	return (count);
}
