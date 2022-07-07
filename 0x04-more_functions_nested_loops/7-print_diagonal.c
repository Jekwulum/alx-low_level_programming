#include "main.h"
/**
 * print_diagonal - output a diagonal line
 */
void print_diagonal(void)
{
	int c, i;

	c = 0;

	while (n > 0)
	{
		i = c;
		while (i < 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}