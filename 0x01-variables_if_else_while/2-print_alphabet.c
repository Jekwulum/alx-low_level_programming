#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char var = 'a';

	while (var <= 'z')
	{
		putchar(var);
		var++;
	}
	putchar('\n');

	return (0);
}
