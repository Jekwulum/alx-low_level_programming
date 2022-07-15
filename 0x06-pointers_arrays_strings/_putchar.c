#include <unistd.h>
/**
 * _putchar - outputs a character to stdout
 * @c: param of type char
 * Return: 1 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
