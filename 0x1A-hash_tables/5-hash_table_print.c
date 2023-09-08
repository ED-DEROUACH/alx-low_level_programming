#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	if (ht == NULL)
		return;

	printf("{");
	if (ht->array != NULL)
	{
		unsigned long int i;
		hash_node_t *current_node;
		int first_entry = 1;

		for (i = 0; i < ht->size; i++)
		{
			current_node = ht->array[i];
			while (current_node != NULL)
			{
				if (!first_entry)
					printf(", ");
				printf("'%s': '%s'", current_node->key, current_node->value);
				first_entry = 0;
				current_node = current_node->next;
			}
		}
	}
	printf("}\n");
}

