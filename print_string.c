#include "main.h"
#include <stdarg.h>

int print_S(va_list args)
{
    char *str = va_arg(args, char *);
    puts(str);
    return(0);
}


