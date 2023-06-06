#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
* print_listint_safe - Prints a listint_t list.
* @head: Pointer to the first node of the linked list.
* Return: The number of nodes in a list
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *nextNode = head;
const listint_t *nextNode2 = head;
size_t nc_count = 0;

while (nextNode && nextNode2 && nextNode2->next)
{
printf("[%p] %d\n", (void *) nextNode, nextNode->n);
nextNode = nextNode->next;
nextNode2 = nextNode2->next->next;

if (nextNode == nextNode2)
{
printf("-> [%p] %d\n", (void *) nextNode, nextNode->n);
exit(98);
}

nc_count++;
}

if (nextNode)
{
printf("[%p] %d\n", (void *) nextNode, nextNode->n);
nc_count++;
}

return (nc_count);
}
