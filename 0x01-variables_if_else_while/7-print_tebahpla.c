#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char val;

	for (val = 'z'; val >= 'a'; val--)
	{
		putchar(val);
	}
	putchar('\n');

	return (0);
}
