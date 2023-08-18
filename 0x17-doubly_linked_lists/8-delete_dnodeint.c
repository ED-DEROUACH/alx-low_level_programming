#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at specific index
 * @head: head of linked list
 * @index: index of node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;

if (head == NULL || *head == NULL)
return (-1);

current = *head;

for (unsigned int i = 0; i < index && current != NULL; i++)
current = current->next;

if (current == NULL)
return (-1);

if (current->prev != NULL)
current->prev->next = current->next;
else
*head = current->next;

if (current->next != NULL)
current->next->prev = current->prev;

free(current);
return (1);
}
