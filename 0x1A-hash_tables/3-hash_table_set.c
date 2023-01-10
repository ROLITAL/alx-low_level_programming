#include "hash_tables.h"

/**
 * hash_table_set -Add or update an element in the hash table.
 * @ht: A pointer to the hash table.
 * @key: the key to add - cannot be an empty string.
 * @value: the value associated with key
 * Return: upon failure - 0.
 * otherwise - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, cont char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, i;

	if ( !ht || !*key || !value)
	{
		return (0);
	}

	value_copy + strdup(value);
	if (value_copy == NULL)
		return (0);

	indec = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht>array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return(1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->value = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
