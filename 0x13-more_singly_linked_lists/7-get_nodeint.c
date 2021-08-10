#include "lists.h"

/**
 *get_nodeint_at_index - returns node at specified index
 *@head: pointer to the head node
 *@index: number of node to be printed
 *Return: index node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int idx;

	if (head == NULL)
		return (NULL);

	temp = head;

	for (idx = 0; idx < index; idx++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
