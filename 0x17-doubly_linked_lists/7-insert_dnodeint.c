#include "lists.h"

/**
 *insert_dnodeint_at_index - insert node at idx position
 *@h: pointer to the head pointer
 *@idx: position in which to insert node
 *@n: node content
 *Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = NULL;
	dlistint_t *new = NULL;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	tmp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	for (i = 1; i < idx; i++)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	new->prev = tmp->prev;
	new->next = tmp->next;
	tmp->next = new;

	return (new);

}
