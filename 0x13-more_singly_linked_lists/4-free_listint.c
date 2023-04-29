#include "lists.h"

/**
 * free_listint - to free a linked list
 * @head: listint_t to list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *zako;

	while (head)
	{
		zako = head->next;
		free(head);
		head = zako;
	}
}

