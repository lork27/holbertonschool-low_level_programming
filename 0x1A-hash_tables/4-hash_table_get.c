#include "hash_tables.h"

/**
 *hash_table_get - function that retrieves a value associated with a key
 *@ht: hash table you want to look into
 *@key: the one we are looking for
 *Return: value associated with key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_num;

	if (key == NULL || ht == NULL)
		return (NULL);
	key_num = key_index((const unsigned char *)key, ht->size);
	if (ht->array[key_num])
		return (ht->array[key_num]->value);
	else
		return (NULL);

	/*
	 *this function is missing how to add element to the hash table
	 *in the case of a collision
	 *Maybe check if there if ht-> is not NULL move through linked list until
	 *ht->array[idx]->next is NULL and add the value there
	 *and if it is null add the value there as it is now??
	 */
}
