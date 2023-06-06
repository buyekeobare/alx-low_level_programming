#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t
* linked list, and returns the head node’s data (n)
* @head: a pointer to the fitst node of the linked list
* Return: returns the head node's data
*/
int pop_listint(listint_t **head)
{
	int i;

	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	i = temp->i;
	temp = temp->next;
	free(temp);

	return (n);
}
