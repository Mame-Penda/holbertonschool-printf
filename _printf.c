#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - Produces formatted output.
 * @format: Format string containing the text and format specifiers.
 *
 * Return: Total number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list args;
va_start(args, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);
while (format[i])
{
if (format[i] == '%')
{
int(*func)(va_list) = get_op_function(format[i + 1]);
if (func)
{
len += func(args);
i += 2;
}
else
{
_putchar(format[i]);
_putchar(format[i + 1]);
len += 2;
i += 2;
}
}
else
{
_putchar(format[i]);
len++;
i++;
}
}
va_end(args);
return (len);
}
