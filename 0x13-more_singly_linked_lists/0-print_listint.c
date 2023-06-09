#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of a listint_t list.
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numNodes++;
	}
	return (numNodes);
}
<<<<<<< HEAD
=======

>>>>>>> d83fddab16efed41502cc2fe9dee8e4534f88039
