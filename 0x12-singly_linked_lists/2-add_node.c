#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *add_node-push node in the front
 *@str:char
 *@head:this is fist node
 *Return:all new dode;
 */

list_t *add_node(list_t **head, const char *str)
{
unsigned int s = 0;
list_t *new;
while (str[s])
s++;

new = malloc(sizeof(list_t));


if (!new)
return (NULL);
new->str = strdup(str);
new->len = s;
new->next = (*head);
(*head) = new;
return (*head);
}
