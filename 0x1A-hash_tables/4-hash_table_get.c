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
	hash_node_t *tmp = NULL;

	if (key == NULL || ht == NULL)
		return (NULL);
	key_num = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[key_num];
	while (tmp && strcmp(key, tmp->key) != 0)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		return (NULL);
	}
	else
		return (tmp->value);
}
