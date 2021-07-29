#include "lists.h"

/**
 *list_len - return numer of elements in a linked list
 *@h: head node
 *Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	int ct = 0;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		ct++;
	}
	return (ct);
}
