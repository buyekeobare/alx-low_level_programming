#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: double pointer of type hash_table_t for hash table.
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int j, flag1 = 0;

	if (ht == NULL)
		return;

	putchar('{');

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			if (flag1 == 1)
				printf(", ");

			temp = ht->array[i];

			while (temp != NULL)
			{
				if (temp->next == NULL)
				{
					printf("'%s': ", temp->key);
					printf("'%s'", temp->value);
					break;
				}
				printf("'%s': '%s', ", temp->key, temp->value);
				temp = temp->next;
			}
			flag1 = 1;
		}

		if (ht->array[j] == NULL)
			continue;
	}
	printf("}\n");
}
