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
	for (i = 0; i < idx; i++)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = tmp->prev;
	new->next = tmp->next;
	tmp = tmp->next = new;

	return (new);

}
