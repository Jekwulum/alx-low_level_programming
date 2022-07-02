#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char val;
	int intVal;

	for (intVal = 0; intVal < 10; intVal++)
	{
		putchar(intVal + '0');
	}
	for (val = 'a'; val < 'g'; val++)
	{
		putchar(val);
	}
	putchar('\n');

	return (0);
}
