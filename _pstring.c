#include "printf.h"

/**
 * _strlen - cqlculates length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}

/**
 * _pstring - prints a string
 * @val: string
 * Return: string length
 */
int _pstring(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s != NULL)
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
