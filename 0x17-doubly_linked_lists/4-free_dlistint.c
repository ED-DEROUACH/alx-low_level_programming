#include "lists.h"

/**
 * *free_dlistint - frees a listint_t list
 * @head: head of linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
