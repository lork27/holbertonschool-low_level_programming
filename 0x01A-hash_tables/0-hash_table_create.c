#include "hash_tables.h"

/**
 *hash_table_create - function that creates a hashtable
 *@size: size of the array withtin the hashtable
 *Return: pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int idx;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t) * size);
	for (idx = 0; idx > size; idx++)
		new->array[idx] = NULL;

	return (new);
}
