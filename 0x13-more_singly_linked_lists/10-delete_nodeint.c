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
	listint_t *temp, *nextNode;

	temp = *head;

	if (index != 0)
	{
		for (i = 1; i < index && temp != NULL; i++)
		{
			temp = temp->next;
		}
	}

	if (temp == NULL || (temp->next == NULL && index != 0))
	{
		return (-1);
	}

	nextNode = temp->nextNode;

	if (index != 0)
	{
		temp->nextNode = nextNode->nextNode;
		free(nextNode);
	}
	else
	{
		free(temp);
		*head = nextNode;
	}

	return (1);
}
