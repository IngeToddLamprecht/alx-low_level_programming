#include "main.h"

/**
 * _strlen - Returns string length
 * @s: String
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
