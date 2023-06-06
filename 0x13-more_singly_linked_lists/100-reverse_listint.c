#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer of the first node of the linked list
 * Return: pointer to the first node
 * of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *temp = *head;
listint_t *next;

while (temp != NULL)
{
next = temp->next;
temp->next = prev;
prev = temp;
temp = next;
}

*head = prev;
return (*head);
}
