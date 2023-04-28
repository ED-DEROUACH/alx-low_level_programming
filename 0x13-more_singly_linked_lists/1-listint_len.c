#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @z: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *z)
{
	size_t x = 0;

	while (z)
	{
		x++;
		z = z->next;
	}

	return (x);
}

