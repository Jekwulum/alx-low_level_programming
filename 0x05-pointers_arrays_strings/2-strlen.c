#include "main.h"
/**
 * _strlen - return length of string
 * @s: char type pointer
 * Return: string length
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
