#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_dnodeint_end - add a node at the end of a linked list
 * @head: The character to print
 * @n: string for the new node
 *
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *current = *head;
dlistint_t *new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
free(new_node);
return (NULL);
}

new_node->n = n;
new_node->next = NULL;

if (current == NULL)
{
new_node->prev = NULL;
*head = new_node;
}
else
{
while (current->next != NULL)
{
current = current->next;
}

new_node->prev = current;
current->next = new_node;
}

return (new_node);
}
