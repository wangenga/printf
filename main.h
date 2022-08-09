#ifndef _PRINTF_H_
#define _PRINTF_H_

#define BUFSIZE MAXLENGTH
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* Importing Libraries */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* Type Definitions */

/**
 *struct format - structure for printing various types
 *@spc: type to print
 *@f: function to print
 */

typedef struct format
{
	const char spc;
	int (*f)(va_list);
} format_t;

/* Function Prototypes */

int _putchar(char c);
int _printf(const char *format, ...);
/* functions to print numbers */
int print_binary(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[], int flags, int width, int precision, int size);
/* basic functions */
int print_c(va_list parameters);
int print_s(va_list parameters);
int print_percent(__attribute__((unused))va_list parameters);
int (*get_func(const char a))(va_list);

#endif
