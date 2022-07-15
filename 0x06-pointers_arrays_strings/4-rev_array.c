#include "main.h"
/**
 * reverse_array - reverse the contents of an array of int
 * @a: array of integer values
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int h;

	for (h = (n / 2); h > 0; h--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
