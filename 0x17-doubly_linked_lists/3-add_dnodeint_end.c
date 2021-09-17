#include "lists.h"
/**
 *add_dnodeint_end - add new node at end of dlinked list
 *@head: pointer to dlinkedlist
 *@n: node datta
 *Return: created node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (tmp == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	tmp->prev = tmp;
	return (new);
}
