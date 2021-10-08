#include "hash_tables.h"

/**
 *hash_table_create - function that creates a hashtable
 *@size: size of the array withtin the hashtable
 *Return: pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int idx;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_table->array) * size);
	if (hash_table->array == NULL)
		return (NULL);
	for (idx = 0; idx < size; idx++)
	{
		hash_table->array[idx] = NULL;
	}


	return (hash_table);
}
