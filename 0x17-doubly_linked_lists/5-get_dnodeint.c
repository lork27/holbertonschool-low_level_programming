#include "lists.h"

/**
 *get_dnodeint_at_index - get node at nth index
 *@head: linked list
 *@index: index of node
 *Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int idx;

	if (head == NULL)
		return (NULL);
	tmp = head;
	for (idx = 0; idx < index; idx++)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	return (tmp);
}
