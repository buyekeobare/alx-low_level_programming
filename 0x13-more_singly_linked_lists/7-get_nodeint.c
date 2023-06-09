#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * of a listint_t linked list.
 * @head: Pointer to the first node of the linked list.
 * @index: index of the node.
 * Return: nth node, NULL if node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = head;

	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}

	return (temp);
}
