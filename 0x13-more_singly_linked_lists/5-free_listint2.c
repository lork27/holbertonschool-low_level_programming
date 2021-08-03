#include "lists.h"

/**
 *free_listint2 - frees up every node of type listint_t type
 *@head: pointer to the pointer to the first node of list_t
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	if (*head == NULL)
		return;
	if (*head != NULL)
	{
		temp = *head;

		while (temp != NULL)
		{
			temp2 = temp->next;
			free(temp);
			temp = temp2;
		}
		*head = NULL;
	}
}
