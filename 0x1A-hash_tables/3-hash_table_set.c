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
	unsigned long int hash;
	hash_node_t *new = NULL, *tmp = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0 || strlen(value) == 0)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = (char *)key;
	new->value = (char *)value;
	new->next = NULL;
	hash = key_index((const unsigned char *)key, ht->size);
	if (ht->array[hash] == NULL)
	{
		ht->array[hash] = new;
		return (1);
	}
	else
	{
		tmp = ht->array[hash];
			while (tmp != NULL)
			{
				tmp = tmp->next;
			}
		tmp = ht->array[hash];
		new->next = tmp;
		ht->array[hash] = new;
		return (1);
	}

}
