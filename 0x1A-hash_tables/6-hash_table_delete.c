#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: pointer to the has table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hd = ht;
	hash_node_t *nd, *tmp;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			nd = ht->array[i];
			while (nd != NULL)
			{
				tmp = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = tmp;
			}
		}
		i++;
	}
	free(hd->array);
	free(hd);
}
