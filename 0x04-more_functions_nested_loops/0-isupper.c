#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: arg of int type
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
