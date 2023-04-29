#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - checking the code
 *
 * Return: return Always 0.
 */
int main(void)
{
    listint_t *oussama;
    listint_t *oussama2;
    listint_t *deroucha;

    oussama2 = NULL;
    add_nodeint(&oussama2, 0);
    add_nodeint(&oussama2, 1);
    add_nodeint(&oussama2, 2);
    add_nodeint(&oussama2, 3);
    add_nodeint(&oussama2, 4);
    add_nodeint(&oussama2, 98);
    add_nodeint(&oussama2, 402);
    add_nodeint(&oussama2, 1024);
    print_listint_safe(oussama2);
    deroucha = find_listint_loop(oussama2);
    if (deroucha != NULL)
    {
        printf("Loop starts at [%p] %d\n", (void *)deroucha, deroucha->n);
    }
    free_listint_safe(&oussama2);
    oussama = NULL;
    deroucha = add_nodeint(&oussama, 0);
    add_nodeint(&oussama, 1);
    add_nodeint(&oussama, 2);
    add_nodeint(&oussama, 3);
    add_nodeint(&oussama, 4);
    add_nodeint(&oussama, 5);
    add_nodeint(&oussama, 6);
    deroucha->next = add_nodeint(&oussama, 7);
    add_nodeint(&oussama, 98);
    add_nodeint(&oussama, 402);
    add_nodeint(&oussama, 1024);
    print_listint_safe(oussama);
    deroucha = find_listint_loop(oussama);
    if (deroucha != NULL)
    {
        printf("Loop starts at [%p] %d\n", (void *)deroucha, deroucha->n);
    }
    free_listint_safe(&oussama);
    return (0);
}

