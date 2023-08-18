#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at specific index
 * @h: head of linked list
 * @idx: index of new node
 * @n: new node value
 * Return: inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current;
dlistint_t *new;

if (h == NULL)
return (NULL);

current = *h;

for (; idx != 0; idx--)
{
current = current->next;
if (current == NULL)
return (NULL);
}

new = malloc(sizeof(dlistint_t));

if (new == NULL)
{
free(new);
return (NULL);
}

new->n = n;
new->next = current;
new->prev = current->prev;
if (current->prev != NULL)
current->prev->next = new;

  /* TODO: Handle special case when idx is 0 and last index */

return (current);
}
