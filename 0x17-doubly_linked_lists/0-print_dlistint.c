#include "lists.h"
#include <stdio.h>
/**
 *print_dlistint - prints all elements of a doubly linked list
 *@h: linked list to pass thru
 *Return: num of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	if (h == 0)
		return (0);
	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
