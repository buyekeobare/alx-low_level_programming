#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t
* linked list, and returns the head node’s data (n)
* @head: a pointer to the fitst node of the linked list
* Return: returns the head node's data
*/
int pop_listint(listint_t **head)
{
	int deleted = 0;
	listint_t *temp;

	if (*head == NULL)
		return (deleted);

	temp = *head;
	deleted = temp->n;

	*head = (*head)->next;
	free(temp);

	return (deleted);
}
