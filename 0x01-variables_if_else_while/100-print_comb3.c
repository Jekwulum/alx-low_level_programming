#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b, c;

	a = 0;

	while (i < 100)
	{
		b = a % 10;
		c = a / 10;

		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');

			if (a < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		a++;
	}
	putchar('\n');

	return (0);
}
