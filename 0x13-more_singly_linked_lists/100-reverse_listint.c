#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **h)
{
	listint_t *p = NULL;
	listint_t *n = NULL;

	while (*h)
	{
		n = (*h)->next;
		(*h)->next = p;
		p = *h;
		*h = n;
	}

	*h = p;

	return (*h);
}
