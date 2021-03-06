#include "lists.h"
/**
 *add_dnodeint - add new node at start of dlinked list
 *@head: pointer to linkedlist
 *@n: node datta
 *Return: created node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (!*head)
	{
		new->n = n;
		*head = new;
		return (new);
	}
	else
	{
		new->n = n;
		new->prev = NULL;
		new->next = *head;
		(*head)->prev = new;
		*head = new;
		return (new);
	}
}
