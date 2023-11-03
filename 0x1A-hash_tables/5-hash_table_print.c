#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: A pointer to the hash table to print.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0;
	unsigned char cflag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (cflag == 1)
				printf(", ");
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			cflag = 1;
		}
	}
	printf("}\n");
}
