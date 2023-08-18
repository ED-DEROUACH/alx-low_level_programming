#include "lists.h"

/**
 * get_dnodeint_recursive -recursively returns the nth node of a listint_t linked list.
 * @node: current node
 * @index: node index to return
 * @currentIndex: current index in recursion
 * Return: node
 */
dlistint_t *get_dnodeint_recursive(dlistint_t *node,unsigned int index, unsigned int currentIndex)
{
	if (node == NULL)
		return NULL;

	if (currentIndex ==index)
		return node;

	return (get_dnodeint_recursive(node->next, index,currentIndex +1));
}

/**
 * get_dnodeint_at_index -wrapper function for recursive approach
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head,unsigned int index)
{
	return (get_dnodeint_recursive(head, index, 0));
}
