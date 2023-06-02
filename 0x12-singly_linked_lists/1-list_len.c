#include "lists.h"
/**
 * list_len - Returns the number of elements in a list.
 * @h: singly linked list.
 * Return: The number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
