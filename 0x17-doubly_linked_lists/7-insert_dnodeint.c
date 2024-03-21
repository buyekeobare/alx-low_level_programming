#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a new node at a given position
  * @h: head pointer
  * @idx: index where to add the node
  * @n: the value of the node
  * Return: pointer to newNode or NULL
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp;
	size_t len = dlistint_len(*h);
	unsigned int i;

	if (h == NULL || idx > len)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (idx == len)
	{
		return (add_dnodeint_end(h, n));
	}
	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	temp = *h;
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}
	newNode->next = temp->next;
	newNode->prev = temp;

	if (temp->next != NULL)
	{
		temp->next->prev = newNode;
	}
	temp->next = newNode;
	return (newNode);
}
/**
  * dlistint_len -returns the number of elements in a linked dlistint_t list
  * @h: pointer to head of double linked list
  * Return: number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
const dlistint_t *temp = h;

while (temp != NULL)
{
temp = temp->next;
++i;
}
return (i);
}
