#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_int linked list.
 * @head: Pointer to the first node of the linked list.
 * @index: where the node is to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *prev;

	prev = NULL;
	temp = *head;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
	}
	prev = temp->next;
	temp->next = prev->next;
	free(prev);

	return (1);
}
