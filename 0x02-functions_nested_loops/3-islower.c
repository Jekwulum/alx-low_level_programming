#include "main.h"
/**
 * _islower - Return 1 if letter is lowercase, else 0
 * @c: char type
 * Return: 1 (Success), 0 (failure)
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
