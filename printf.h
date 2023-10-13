#ifndef PRINTF
#define PRINTF

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _pchar(valist c);
int _pstring(valist s);

/**
 * struct format - structure of type format with two elements
 * @src: placeholder
 * @dis: function to process it
 */
typedef struct format
{
	char *src;
	int (*dis)(va_list);
} form;

#endif
