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

	if (key == NULL)
		return (NULL);
	if (ht == NULL)
		return (NULL);
	key_num = key_index((const unsigned char *)key, ht->size);
	if (ht->array[key_num])
		return (ht->array[key_num]->value);
	else
		return (NULL);
}
