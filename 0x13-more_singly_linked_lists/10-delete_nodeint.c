#include "lists.h"

/**
 *delete_nodeint_at_index - deletes node at given position
 *@head: pointer to the pointer to the head node
 *@index: where to delete index
 *Return: 1 if succeeded 0 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *delete;
	unsigned int i;

	if (index == 0)
	{
		if (*head == NULL)
			return (0);
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		if (temp->next == NULL || temp == NULL)
			return (0);
		temp = temp->next;
	}
	delete = temp->next;
	temp->next = delete->next;
	free(delete);
	return (1);
}
