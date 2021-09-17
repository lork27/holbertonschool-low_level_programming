#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes node at index
 *@head: pointer to head of dlinked list
 *@index: point at which we delete node
 *Return: 1 if succed -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	dlistint_t *del = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		if (tmp->next == NULL || tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	del = tmp->next;
	tmp->next = del->next;
	free(del);
	return (1);
}
