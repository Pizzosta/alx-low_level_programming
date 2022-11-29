#include "lists.h"

/**
 * list_len - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nodelem;

	nodelem = 0;

	while (h != NULL)
	{
		h = h->next;
		nodelem++;
	}
	return (nodelem);
}
