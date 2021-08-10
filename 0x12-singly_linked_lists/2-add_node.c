#include "lists.h"

/**
 *add_node - adds node at the start of a linked list
 *@head: pointer to the head node pointer
 *@str: str to be copied to the new head node
 *Return: pointer to the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
		return (NULL);
	new_head->str = strdup(str);
	new_head->len = strlen(str);
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
