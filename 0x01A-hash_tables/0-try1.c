#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
		return NULL;
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return NULL;
	new->size = size;
	new->array = malloc(new->size * sizeof(hash_node_t));
	return (new);
}
