#include "lists.h"

/**
 *free_listint - frees up every node of type listint_t type
 *@head: pointer to the first node of list_t
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
