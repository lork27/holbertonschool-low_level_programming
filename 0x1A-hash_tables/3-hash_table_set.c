#include "hash_tables.h"


/**
 *hash_table_set - function that adds an element to the hash table
 *@ht: the hash table you can to or update the key/value to
 *@key: is the key, cannot be an empty string
 *@value: associated with the key, must be duplicated, it can be empty
 *Return: 1 if success 0 if fails
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new = NULL;
	hash_node_t *tmp = NULL;

	if (ht == NULL || key == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = (char *)key;
	new->value = strdup(value);
	new->next = NULL;
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new;
		return (1);
	}
	else
	{
		tmp = ht->array[idx];
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
		tmp->next = new;
		return (1);
	}

	return (0);
}
