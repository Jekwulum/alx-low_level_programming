#include <stdio.h>
/**
 * main - Entry point
 * Description - Print all possible combinations fo single-digit numbers.
 * return: 0 (Success)
 */
int main(void)
{
	int val = 0;

	while (val < 10)
	{
		putchar(val + '0');
		if (val < 9)
		{
			putchar(44);
			putchar(32);
		}
		val++;
	}
	putchar('\n');

	return (0);
}
