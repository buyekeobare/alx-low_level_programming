#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: pointer of the first node of the linked list.
 * @idx: where the new node to be added.
 * @n: integer
 * Return: the address of the new node,
 * or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode, *temp;

	temp = *head;

	if (idx != 0)
	{
		for (i = 1; i < idx && temp != NULL; i++)
		{
			temp = temp->next;
		}
	}

	if (temp == NULL && idx != 0)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = temp->next;
		temp->next = newNode;
	}

	return (newNode);
}
