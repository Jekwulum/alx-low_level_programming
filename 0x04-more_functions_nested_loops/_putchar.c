#include <unistd.h>
/**
 * _putchar - outputs chars to stdout
 * @c: char to output
 * Return: 0 (success) else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
