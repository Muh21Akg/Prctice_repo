#include "printf.h"

/**
 * _printf - a custom formatted print function
 * @format: format string
 * Return: length of printed string
 */
int _printf(const char *format, ...)
{
	convert_match m[] = {
		{"%c", _pchar},
		{"%s", _pstring},
	};
	int i = 0, j, len = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
here:
	while (format[i] != '\0')
	{
		j = 1;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i += 2;
				goto here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
	}
