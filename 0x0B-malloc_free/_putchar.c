#include <unistd.h>

/**
 * _putchar - c
 * @c: print
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
