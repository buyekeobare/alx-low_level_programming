#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: Pointer of type hash_table_t for hash table.
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t *temp, *temp2;

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			temp = ht->array[j];

			while (temp != NULL)
			{
				temp2 = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = temp2;
			}
		}
	}

	free(ht->array);
	free(ht);
}
