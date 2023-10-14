#include "printf.h"

/**
 * _pchar - prints a character argument
 * @val: argument
 * Return: 1
 */
int _pchar(va_list val)
{
	_putchar(va_arg(val, int));
	return (1);
}
