#include <unistd.h>
/**
 * _putchar - outputs value to stdout
 * @c: value
 *
 * Return: 1 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
