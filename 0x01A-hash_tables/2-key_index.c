#include "hash_tables.h"

/**
 *key_index - function that gives index of a key
 *@key: is the key which you will check the index of
 *@size: the size of the array of the hash table
 *Return: index at which the key/value should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (size == 0)
		return (0);
	index = hash_djb2(key) % size;

	return (index);
}
