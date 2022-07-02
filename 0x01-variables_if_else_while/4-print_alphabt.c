#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char val = 'a';

	while (val <= 'z')
	{
		if (val != 'q' && val != 'e')
			putchar(val);
		val++;
	}
	putchar('\n');

	return (0);
}
