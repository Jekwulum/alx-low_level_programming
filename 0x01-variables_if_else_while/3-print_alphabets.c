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
		putchar(val);
		val++;
	}

	val = 'A';

	while (val <= 'Z')
	{
		putchar(val);
		val++;
	}

	putchar('\n');

	return (0);
}
