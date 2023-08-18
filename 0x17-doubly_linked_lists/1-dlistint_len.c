#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - find number of nodes of doubly linked list
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
if (h == NULL)
return (0);
    
return (1 + dlistint_len(h->next));
}
