i#include "main.h"
/**
 * print_line - print a line
 * @n: length of line
 */
void print_line(int n)
{

	if (n <= 0)
		_putchar('\n');
	int i;
	
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
