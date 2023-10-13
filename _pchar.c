#include "printf.h"

/**
 * _pchar - prints a character argument
 * @val: argument
 * Return: 1
 */
int _pchar(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
