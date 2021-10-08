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
	new->value = (char *)value;
	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
		ht->array[idx] = new;
	else
	{
		tmp = ht->array[idx];
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->key = new->key;
		tmp->value = new->value;
	}

	/**
	 *this function is not checking for collisions
	 *check if the idx our hash funtion gives already has content
	 *if it does use something like add_nodeat_n
	 *to add node at said repeating index first empty node
	 */

	return (1);
}
