i#include "main.h"
/**
 * print_line - print a line
 * @n: length of line
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
