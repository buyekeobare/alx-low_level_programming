#include "lists.h"
/**
 * free_listint_safe - frees listint_t list
 * @h: pointer of the first node of the linked list
 * Return: the size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *actual;
	size_t i;
	int rest;

	i = 0, actual = *h;

	while (actual)
	{
		rest = actual - actual->next;
		if (rest > 0)
		{
			tmp = actual->next;
			free(actual);
			actual = tmp;
			i++;
		} else
		{
			free(actual);
			*h = NULL;
			i++;
			break;
		}

	}

	*h = NULL;

	return (i);
}
