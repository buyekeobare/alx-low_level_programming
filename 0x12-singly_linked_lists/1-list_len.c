#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns the number of elements in
 * a linked list_t list
 * @h: pointer to the list_t list
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t numel;

	numel = 0;
	while (h != NULL)
	{
		h = h->next;
		numel++;
	}
	return (numel);
}
i
