#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_create - A function that creats a hash table
 * @sixe: the size of the array
 *
 * Return: if an error occurs  _NULL
 *            OTHERWISE -a pointer to a new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;
	unsigned long int i;

	/*allocate space for the hash table*/
	t = malloc(sizeof(hash_table_t));

	if (t == NULL)
	{
		return (NULL);
	}

	t->size = size;
	t->array = malloc(sizeof(hash_node_t *) * size);

	if (t->array == NULL)
		free(t);
		return (NULL);

	for (i = 0; i < size; i++)
		t->array[i] = NULL;

	return (t);
}
