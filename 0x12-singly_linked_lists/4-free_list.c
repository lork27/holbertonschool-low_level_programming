#include "lists.h"

/**
 *free_list - frees up every node of type list_t type
 *@head: pointer to the first node of list_t
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
