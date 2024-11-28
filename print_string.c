#include "main.h"

/**
 *_string - writes the string to stdout
 *@args: string that needs to be printed
 *
 *Return: if success then 1.
 *If theres an error then -1 will be returned
 */
int _string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = '\0';

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
