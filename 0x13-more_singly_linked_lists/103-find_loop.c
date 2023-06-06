#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer of the first node of the linked list.
 * Return: the address of the node where the loop starts.
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current2;
	listint_t *current;

	current2 = head;
	current = head;
	while (head && current2 && current2->next)
	{
		head = head->next;
		current2 = current2->next->next;

		if (head == current2)
		{
			head = current;
			current =  current2;
			while (1)
			{
				current2 = current;
				while (current2->next != head && current2->next != current)
				{
					current = current2->next;
				}
				if (current2->next == head)
					break;

				head = head->next;
			}
			return (current2->next);
		}
	}

	return (NULL);
}
