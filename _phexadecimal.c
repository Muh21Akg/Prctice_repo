#include "main.h"

/**
 * prinh - does the actual printing
 * @u: int to be printedi
 */
void prinh(unsigned int u)
{
	if (u / 16)
	{
		prinh(u / 16);
	}
	if (u == 10)
		_putchar('a');
	else if (u == 11)
		_putchar('b');
	else if (u == 12)
		_putchar('c');
	else if (u == 13)
		_putchar('d');
	else if (u == 14)
		_putchar('e');
	else if (u == 15)
		_putchar('f');
	else
		_putchar(u % 10 + '0');
}
/**
 * leh - calculates no of printed chars
 * @i: argument
 * Return: length
 */
int leh(unsigned int i)
{
	int l = 0;

loop:
	if (i / 16)
	{
		l++;
		i = i / 16;
		goto loop;
	}
	l++;
	return (l);
}
/**
 * _phexadecimal - prints an unsigned int argument
 * @arg: argument
 * Return: no of chars printed
 */
int _phexadecimal(va_list arg)
{
	int len;
	unsigned int x;

	x = va_arg(arg, unsigned int);
	len += leh(x);
	prinh(x);
	return (len);
}
