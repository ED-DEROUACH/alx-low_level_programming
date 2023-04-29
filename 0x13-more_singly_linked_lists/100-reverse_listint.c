#include "lists.h"

/**
 * reverse_listint - reversing a linked list
 * @head: to point to the first node in the list
 *
 * Return: to point to the first node in the new list
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
