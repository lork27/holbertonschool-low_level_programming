#include "lists.h"

/**
 *add_nodeint - adds node at the start of a linked list
 *@head: pointer to the head node pointer
 *@n: int to be added to the new node
 *Return: pointer to the new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
		return (NULL);
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
