#include "lists.h"

/**
 * free_listint2 - to free a linked list
 * @head: pointed to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *polo;

	if (head == NULL)
		return;

	while (*head)
	{
		polo = (*head)->next;
		free(*head);
		*head = polo;
	}

	*head = NULL;
}

