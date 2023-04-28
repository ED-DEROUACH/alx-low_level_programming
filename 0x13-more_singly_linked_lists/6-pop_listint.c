#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *zolo;
	int kolo;

	if (!head || !*head)
		return (0);

	kolo = (*head)->n;
	zolo = (*head)->next;
	free(*head);
	*head = zolo;

	return (kolo);
}

