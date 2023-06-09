#include "lists.h"

/**
* free_listint2 - a function that frees a listint_t list, sets the head to NULL
* @head: a head to the listint_t list
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
