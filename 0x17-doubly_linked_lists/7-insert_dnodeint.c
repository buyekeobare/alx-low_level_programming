#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer
 * @idx: index of the list where new node will be added
 * @n:the element to be added
 *
 * Return: address of new node || NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *tmp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = newNode;
		newNode->next = *h;
		*h = newNode;
	}

	while (i < idx - 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	newNode->next = tmp->next;
	newNode->prev = tmp;
	if (tmp->next == newNode)
		tmp->next->prev = newNode;
	tmp->next = newNode;
	return (newNode);
}
