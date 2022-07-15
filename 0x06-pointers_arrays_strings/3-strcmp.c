#include "main.h"
/**
 * _strcmp - compares two string values
 * @s1: param of string value
 * @s2: param of string value
 * Return: zero value if true else negative value if not true
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
