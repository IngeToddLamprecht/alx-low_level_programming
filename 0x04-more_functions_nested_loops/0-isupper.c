#include "main.h"

/**
 * _isupper - Check upper
 * @x: Check number
 *
 * Return: 1 for upper letter or 0 for any else
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
