#include "lists.h"

/**
 * insert_nodeint_at_index - inserting  a new 
 * node in a linked list,
 * at a given position
 * @head: to point to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointing  to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int ader;
	listint_t *paster;
	listint_t *faderst = *head;

	paster = malloc(sizeof(listint_t));
	if (!paster || !head)
		return (NULL);

	paster->n = n;
	paster->next = NULL;

	if (idx == 0)
	{
		paster->next = *head;
		*head = paster;
		return (paster);
	}

	for (ader = 0; faderst && ader < idx; ader++)
	{
		if (ader == idx - 1)
		{
			paster->next = faderst->next;
			faderst->next = paster;
			return (paster);
		}
		else
			faderst = faderst->next;
	}

	return (NULL);
}

