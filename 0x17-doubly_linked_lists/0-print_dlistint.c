#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print elements of doubly linked list
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t nbr_nodes = 0;
const dlistint_t *current;

for (current = h; current != NULL; current = current->next)
{
printf("%i\n", current->n);
nbr_nodes++;
}

return (nbr_nodes);
}
