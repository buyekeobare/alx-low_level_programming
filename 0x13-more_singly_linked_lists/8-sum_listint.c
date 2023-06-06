include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: pointer to the first node of a linked list.
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
