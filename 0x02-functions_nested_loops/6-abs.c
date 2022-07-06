#include "main.h"
/**
 * _abs - checks absolute value of an integer
 * @n: argument of int type
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
