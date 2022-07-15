#include "main.h"

/**
 * _strncpy - copy a string value
 * @dest: param of string value
 * @src: param of string value
 * @n: number of chars to copy over
 * Return: copied string value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
