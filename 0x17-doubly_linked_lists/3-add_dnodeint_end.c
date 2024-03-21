#include "lists.h"
/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list
  * @head: pointer to head pointer of the list
  * @n: data of the new node
  * Return: the address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	newNode = (dlistint_t *)malloc(sizeof(struct dlistint_s));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	if (*head == NULL)
	{
		newNode->next = NULL;
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
	return (newNode);
}
