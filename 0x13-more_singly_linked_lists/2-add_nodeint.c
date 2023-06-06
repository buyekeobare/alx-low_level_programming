#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - Joins a new node at the start of a listint_t list
* @head: Double pointer to the head of the list
* @n: New node value
*
* Return: New element address or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = *head;
*head = newNode;

return (newNode);
}
