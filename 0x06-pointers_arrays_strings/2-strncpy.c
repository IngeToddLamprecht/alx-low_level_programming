#include "main.h"

/**
 * _strncpy - Copy
 * @dest: Destination
 * @src: Source
 * @n: Limit
 *
 * Return: Value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
