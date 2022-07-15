#include "main.h"

/**
 * _strncat - concatenate two string values
 * @dest: string value
 * @src: param of string value
 * @n: number elements that can be concatenated to dest
 * Return: pointer to concatenated value
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
		dest[i] = src[c];

	return (dest);
}
