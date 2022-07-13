#include "main.h"

/**
 * _puts - outputs a string
 * @str: char array type
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
i		_putchar(str[i]);
	}
	_putchar('\n');
}
