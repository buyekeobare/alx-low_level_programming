#include "lists.h"
/**
 * list_len - returns the number of elements in
 * in a linked list_t list
 * @h: pointer to the list_t list
 * Return: number of elements in the list_t list
 */

size_t list_len(const list_t *h)
{
	size_t t;

	t = 0;

	while (h->next != NULL)
	{
		h = h->next;
		t++;
	}
	return (t);
}
