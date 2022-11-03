#include "main.h"
#include <stdio.h>

/**
 * _sqrt - Calculates natural square root
 * _sqrt_recursion - Returns natural square root
 * @n: number
 * @i: iternate
 *
 * Return: Natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
