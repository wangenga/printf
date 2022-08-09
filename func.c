#include "main.h"
#include <stdarg.h>

/**
 *print_c - function to print character
 *@parameters: characters to print
 *
 *Return: number of character or -1
 */

int print_c(va_list parameters)
{
char character = va_arg(parameters, int);

return (_putchar(character));
}

/**
 *print_s - function to print string
 *@parameters: string to print
 *
 *Return: number of characters to print
 */

int print_s(va_list parameters)
{
	int count;
	char *str = va_arg(parameters, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count] != '\0'; count++)
		_putchar(str[count]);

	return (count);
}

/**
 *print_percent - function to print %
 *@parameters: unused
 *
 *Return: always 1
 */

int print_percent(__attribute__((unused))va_list parameters)
{
	char c = '%';

	_putchar(c);

	return (1);
}

