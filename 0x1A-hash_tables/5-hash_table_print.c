#include "hash_tables.h"

/**
 *hash_table_print - prints a hash table
 *@ht: hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	/**
	 *I have to print the key/value pair in the order they appear
	 *in the array of the hash table
	 *order is: array then list
	 *format should look like:
	 *{'Key': 'Value', 'anotherKEY': 'AnotherVALUE', 'FinalKey': 'FinalValue'}
	 *if HT is null don't print anything
	 */
	unsigned long int idx;
	hash_node_t *tmp = NULL;
	char *comma = "";

	if (!ht)
		return;
	putchar('{');
	for (idx = 0; idx < ht->size; idx++)
	{
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", comma, tmp->key, tmp->value);
			comma = ", ";
			tmp = tmp->next;
		}
	}
	putchar('}');
	putchar('\n');
}
