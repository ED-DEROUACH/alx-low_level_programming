#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *oussama = head;
	listint_t *edderouch = head;

	if (!head)
		return (NULL);

	while (oussama && edderouch && edderouch->next)
	{
		edderouch = edderouch->next->next;
		oussama = oussama->next;
		if (edderouch == oussama)
		{
			oussama = head;
			while (oussama != edderouch)
			{
				oussama = oussama->next;
				edderouch = edderouch->next;
			}
			return (edderouch);
		}
	}

	return (NULL);
}

