#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * n: argument of type int
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int val;

	if (n < 0)
	{
		val = -1 * (n % 10);
		_putchar(val + '0');
		return (val);
	}
	else
	{
		val = n % 10;
		_putchar(val + '0');
		return (val);
	}
}
