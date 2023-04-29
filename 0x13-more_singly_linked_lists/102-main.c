#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - checking the code
 *
 * Return: 0. returning always
 */
int main(void)
{
    listint_t *testo;
    listint_t *king;
    listint_t *polo;

    king = NULL;
    add_nodeint(&king, 0);
    add_nodeint(&king, 1);
    add_nodeint(&king, 2);
    add_nodeint(&king, 3);
    add_nodeint(&king, 4);
    add_nodeint(&king, 98);
    add_nodeint(&king, 402);
    add_nodeint(&king, 1024);
    print_listint_safe(king);
    testo = NULL;
    polo = add_nodeint(&testo, 0);
    add_nodeint(&testo, 1);
    add_nodeint(&testo, 2);
    add_nodeint(&testo, 3);
    add_nodeint(&testo, 4);
    polo->next = add_nodeint(&testo, 98);
    add_nodeint(&testo, 402);
    add_nodeint(&testo, 1024);
    print_listint_safe(testo);
    free_listint_safe(&king);
    free_listint_safe(&testo);
    printf("%p, %p\n", (void *)king, (void *)testo);
    return (0);
}

