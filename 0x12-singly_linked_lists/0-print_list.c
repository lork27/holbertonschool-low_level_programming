#include "lists.h"

/**
 *print_list - prints all elements of list_t list
 *@h: head node
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	int ct = 0;

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", temp->len, temp->str);
		temp = temp->next;
		ct++;
	}
	return (ct);
}
