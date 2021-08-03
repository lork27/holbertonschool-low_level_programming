#include "lists.h"

/**
 *sum_listint - returns the summ of all the
 *@head: pointer to the head node
 *Return: sum of all ints inside every node
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);

}
