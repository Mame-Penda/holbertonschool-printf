#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _print - Custom printf function to handle %d and %i format specifiers
 * @format: string that may contain format specifiers (%d or %i)
 *
 * Return: count
 */
int _print(const char *format, ...)
{
va_list args;
int count = 0;

va_start(args, format);

while (*format)
{
if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
{
int num = va_arg(args, int);
count += print_number(num);
format++;
}
else
{
_putchar(*format);
count++;
}
format++;
}

va_end(args);
return (count);
}
