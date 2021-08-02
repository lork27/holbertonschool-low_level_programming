#include "lists.h"

/**
 *print_list - prints all elements of list_t list
 *@h: head node
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int ct = 0;

	temp = h;

	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
		ct++;
	}
	return (ct);
}
