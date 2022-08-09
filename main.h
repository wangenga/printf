#ifndef _PRINTF_H_
#define _PRINTF_H_

#define BUFSIZE MAXLENGTH

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

#endif
