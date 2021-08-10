#include "lists.h"

/**
 *listint_len - return numer of elements in a linked list
 *@h: head node
 *Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	int ct = 0;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		ct++;
	}
	return (ct);
}
