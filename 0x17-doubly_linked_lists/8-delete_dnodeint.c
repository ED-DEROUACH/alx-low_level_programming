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

do
{
current = current->next;
index--;
if (current == NULL)
return (-1);
} while (index != 0);

if (current->prev != NULL)
current->prev->next = current->next;
else
{
*head = current->next;
if (current->next != NULL)
current->next->prev = NULL;
free(current);
}

return (1);
}
