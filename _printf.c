#include "printf.h"

/**
 * _printf - a custom formatted print function
 * @format: format string
 * Return: length of printed string
 */
int _printf(const char *format, ...)
{
	f_func fun[] = {
		{"c", _pchar},
		{"s", _pstring},
	};
	int i, funs, len;
	va_list arg;

	i = len = 0;
	va_start(arg, format);
loop:
	while (format[i] && format)
		{
		funs = 0;
		while (funs < 2)
		{
			if (format[i] == '%')
			{
				if (fun[funs].src[0] == format[i + 1])
					{
					len += fun[funs].des(arg);
					i += 2;
					goto loop;
				}
			}
			funs++;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(arg);
	return (len);
}
