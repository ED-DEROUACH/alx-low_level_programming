#include "lists.h"

/**
 * listint_len - to returns the number 
 * of elements in a linked lists
 * @z: to link list of type listint_t to traverse
 *
 * Return: returnnumber of nodes
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

