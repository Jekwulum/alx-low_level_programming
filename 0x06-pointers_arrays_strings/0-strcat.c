#include "main.h"

/**
 * _strcat - concatenates two string values
 * @dest: first value to concatenate
 * @src: second value to concatenate
 * Return: pointer to value concatenated
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
