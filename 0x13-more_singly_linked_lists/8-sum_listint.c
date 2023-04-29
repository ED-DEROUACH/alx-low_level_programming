#include "lists.h"

/**
 * sum_listint - calculating  the sum of 
 * all the data in a listint_t list
 * @head: to first node in the linked list
 *
 * Return: to resulting sum
 */
int sum_listint(listint_t *head)
{
	int e = 0;
	listint_t *d = head;

	while (d)
	{
		e += d->n;
		d = d->next;
	}

	return (e);
}

