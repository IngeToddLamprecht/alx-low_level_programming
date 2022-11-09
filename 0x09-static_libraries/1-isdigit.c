#include "main.h"

/**
 * _isdigit - Check digit
 * @x: Check number
 *
 * Return: 1 for a character that will be a digit and 0 for others
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}

	return (0);
}
