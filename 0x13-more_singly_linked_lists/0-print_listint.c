#include "lists.h"

/**
 * print_listint - printing all the elements of a linked list
 * @h: to link list of type listint_t to print
 *
 * Return: returning the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t kkkk = 0;

	while (h)
	{
		printf("%d\n", h->n);
		kkkk++;
		h = h->next;
	}

	return (kkkk);
}

