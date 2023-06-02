#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: pointer to the first node of the linked list.
 * @str: new string
 * Return: the address of the new element (Success)
 * NULL (error)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t s;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (s = 0; str[s]; s++)

		;

	new->len = s;
	new->next = *head;
	*head = new;

	return (*head);
}

