#include "main.h"
#include <stddef.h>

/**
 * get_op_function - return a function to the corresponding specifier.
 * @specifier: the format specifier.
 *
 * Return: pointer to the corresponding function or null if its not found.
 */
int (*get_op_function(char specifier))(va_list)
{
	int i = 0;
	op_t ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_i_d},
		{"d", print_i_d},
		{NULL, NULL}
	};
	while (ops[i].specifier)
	{
		if (*(ops[i].specifier) == specifier)
			return (ops[i].func);
		i++;
	}
	return (NULL);
}
