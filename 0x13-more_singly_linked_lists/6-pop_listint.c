#include "lists.h"

/**
 *pop_listint - deletes head node and returns n value of it
 *@head: pointer to the pointer of the head node
 *Return: n value inside head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int headint;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	headint = temp->n;
	free(temp);
	return (headint);
}
