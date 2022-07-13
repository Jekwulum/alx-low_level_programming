#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: int type
 */

int main(void)
{
	int randd, count, total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		randd = (rand() % 125) + 1;
		printf("%c", randd);
		total -= randd;
	}
	printf("%c", total);

	return (0);
}
