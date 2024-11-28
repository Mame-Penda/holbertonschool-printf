#include "main.h"
#include <stdio.h>
#include <string.h>
int print_c(va_list args)
{
char c = va_arg(args, int);
_putchar(c);
return (1);
}

int print_s(va_list args)
{
char *s = va_arg(args, char *);
puts(s);
return strlen(s);
}

int print_d(va_list args)
{
int d = va_arg(args, int);
return _printf("%d", d);
}

int print_i(va_list args)
{
int i = va_arg(args, int);
return _printf("%d", i);
}
