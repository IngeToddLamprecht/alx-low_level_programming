#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Destination Value
 * @src: Source value
 * @n: Limit
 *
 * Return: Pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
