#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - List elemetns
 * @h: A linked list
 *
 * Return: no of elemetns
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
