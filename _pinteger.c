#include "main.h"

/**
 * prin - does the actual printing
 * @x: int to be printed
 * Return: no chars printed
 */
int prin(int x)
{
	int len = 0;

	if (x < 0)
	{
		_putchar('-');
		x = -1 * x;
		len++;
	}
	if (x / 10)
	{
		prin(x / 10);
		len++;
	}
	_putchar(x % 10 + '0');
	return (len);
}
/**
 * _pinteger - prints an int argument
 * @arg: argument
 * Return: no of chars printed
 */
int _pinteger(va_list arg)
{
	int x, len = 0;

	x = va_arg(arg, int);
	len = prin(x);
	return (len);
}
