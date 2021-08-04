#include "lists.h"

/**
 *insert_nodeint_at_index - creates node at given position
 *@head: pointer to the pointer to the head node
 *@idx: where to create the node
 *@n: int to add to the new node
 *Return: index node of linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *newnode;
	unsigned int i;


	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	temp = *head;
	if (idx == 0)
	{
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 1; i < idx; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	newnode->n = n;
	newnode->next = temp->next;
	temp = temp->next = newnode;

	return (newnode);
}
