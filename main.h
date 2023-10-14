#ifndef PRINTF
#define PRINTF

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _pchar(va_list);
int _pstring(va_list);
int _preverse(va_list);

/**
 * struct format_functions - structure of type format with two elements
 * @src: placeholder
 * @des: function to process it
 */
typedef struct format_functions
{
	char *src;
	int (*des)(va_list);
} f_func;

#endif
