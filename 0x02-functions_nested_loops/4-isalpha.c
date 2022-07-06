#include "main.h"
/**
 * _isalpha - Return 1 if letter is an alphabetic char, else 0
 * @c: character
 * Return: 1 (True), 0 (False)
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
