#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: points to the list_t list
 *
 * Return: total number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}
