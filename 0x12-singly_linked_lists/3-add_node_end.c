#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: pointer of the first node of the linked list.
 * @str: new string to the list
 * Return: address of the new element (success)
 * Null (error)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t s;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (s = 0; str[s]; s++)
		;

	new->len = s;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}

