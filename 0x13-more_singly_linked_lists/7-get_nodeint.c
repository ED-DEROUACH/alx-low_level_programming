#include "lists.h"

/**
 * get_nodeint_at_index - returning  the node 
 * at a certain index in a linked list
 * @head: to first node in the linked list
 * @index: to index of the node to return
 *
 * Return: pointing to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;
	listint_t *riko = head;

	while (riko && y < index)
	{
		riko = riko->next;
		y++;
	}

	return (riko ? riko : NULL);
}

