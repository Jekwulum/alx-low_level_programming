#include <stdio.h>
/** 
 * main - Entry point
 * Description - prints the size of various types on the computer it is compiled
 * Return: Always 0 (Success)
 */

int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongType;
	float floatType;
	printf("Size of a char: %ld bytes(s)\n", sizeof(charType));
	printf("Size of an int: %ld bytes(s)\n", sizeof(intType));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(longLongType));
	printf("Size of a float: %ld bytes(s)\n", sizeof(floatType));

	return 0;
}
