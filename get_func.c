#include "main.h"

/**
 *get_func - function to find a function pointer associated with specifier
 *@a: specifier to find the correct function
 *
 *Return: function pointer
 */

int (*get_func(const char a))(va_list)
{
	unsigned int m = 0;

	format_t structs_pr[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{'\0', NULL}
	};


	for (; structs_pr[m].spc; m++)
	{
		if (a == structs_pr[m].spc)
			return (structs_pr[m].f);
	}

	return (NULL);
}
