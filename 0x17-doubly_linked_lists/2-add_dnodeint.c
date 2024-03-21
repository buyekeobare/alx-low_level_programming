#include "lists.h"
/**
  * add_dnodeint - adds a new node at the beginning of a dlistint_t list
  * @head: pointer to head pointer of the list
  * @n: data of the new node
  * Return: the address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

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
	newNode->next = *head;
	newNode->prev = NULL;
	(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
