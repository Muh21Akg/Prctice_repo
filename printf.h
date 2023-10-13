#ifndef PRINTF
#define PRINTF

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _pchar(va_list c);
int _pstring(va_list s);

/**
 * struct format - structure of type format with two elements
 * @id: placeholder
 * @f: function to process it
 */
typedef struct format
{
	char *id;
	int (*f)(va_list);
} convert_match;

#endif
