#include "main.h"
/**
 * print_sign - output the sign of a number
 * @n: argument type int
 * Return: 1 if +ve, 0 if 0 else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
