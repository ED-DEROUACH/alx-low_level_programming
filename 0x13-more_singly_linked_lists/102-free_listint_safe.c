#include "lists.h"

/**
 * free_listint_safe - to frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **j)
{
	size_t lol = 0;
	int ffid;
	listint_t *pmet;

	if (!j || !*j)
		return (0);

	while (*j)
	{
		ffid = *j - (*j)->next;
		if (ffid > 0)
		{
			pmet = (*j)->next;
			free(*j);
			*j = pmet;
			lol++;
		}
		else
		{
			free(*j);
			*j = NULL;
			lol++;
			break;
		}
	}

	*j = NULL;

	return (lol);
}

