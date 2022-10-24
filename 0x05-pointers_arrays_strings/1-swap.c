#include "main.h"

/**
 * swap_int - Swaps integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: empty
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
