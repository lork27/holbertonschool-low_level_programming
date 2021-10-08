#include "hash_tables.h"


/**
 *hash_table_delete - deletes a hash table
 *@ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *node;
	hash_table_t *head;
	unsigned long int idx;

	head = ht;

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			node = ht->array[idx];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);

}
