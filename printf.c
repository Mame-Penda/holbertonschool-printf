#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom implementation of printf function
 * @format: The format string
 *
 * Return: The number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    const char *ptr;

    if (!format)
        return (-1); // Return -1 for NULL format

    va_start(args, format);
    ptr = format;

    while (*ptr)
    {
        if (*ptr == '%')
        {
            ptr++;
            if (*ptr == 'c') // Handle char
            {
                char c = (char)va_arg(args, int);
                write(1, &c, 1);
                count++;
            }
            else if (*ptr == 's') // Handle string
            {
                char *str = va_arg(args, char *);
                if (!str)
                    str = "(null)";
                while (*str)
                {
                    write(1, str, 1);
                    str++;
                    count++;
                }
            }
            else if (*ptr == '%') // Handle %%
            {
                write(1, "%", 1);
                count++;
            }
            else if (*ptr) // Handle unknown specifier
            {
                write(1, "%", 1);
                write(1, ptr, 1);
                count += 2;
            }
        }
        else // Handle normal characters
        {
            write(1, ptr, 1);
            count++;
        }
        ptr++;
    }

    va_end(args);
    return (count);
}
