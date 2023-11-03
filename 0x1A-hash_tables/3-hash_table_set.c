#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 *
 * @ht: hash table you want to add or update the key/value to
 * @key: key is the value
 * @value: alue associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int idx, i;
	char *vcpy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	vcpy = strdup(value);
	if (vcpy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	i = idx;
	for (; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = vcpy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(vcpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = vcpy;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
