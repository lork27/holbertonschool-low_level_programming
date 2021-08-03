#include "lists.h"

/**
 *free_listint2 - frees up every node of type listint_t type
 *@head: pointer to the pointer to the first node of list_t
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
