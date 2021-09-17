#include "lists.h"

/**
 *sum_dlistint - sum data of all nodes
 *@head: linked list
 *Return: sum of all data of nodes
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
