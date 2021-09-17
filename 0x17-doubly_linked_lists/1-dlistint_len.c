#include "lists.h"
#include <stdio.h>
/**
 *dlistint_len - returns len of dlinked list
 *@h: linked list to pass thru
 *Return: num of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	if (h == 0)
		return (0);
	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
