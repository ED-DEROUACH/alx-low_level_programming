#include "lists.h"

/**
 * add_nodeint - adding a new node 
 * at the beginning of a linked list
 * @head: to point to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: to point to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tototo;

	tototo = malloc(sizeof(listint_t));
	if (!tototo)
		return (NULL);

	tototo->n = n;
	tototo->next = *head;
	*head = tototo;

	return (tototo);
}

