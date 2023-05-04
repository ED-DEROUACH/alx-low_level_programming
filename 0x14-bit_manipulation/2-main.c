#include <stdio.h>
#include "main.h"

/**
 * main - checking the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int oussama;

    oussama = get_bit(1024, 10);
    printf("%d\n", oussama);
    oussama = get_bit(98, 1);
    printf("%d\n", oussama);
    oussama = get_bit(1024, 0);
    printf("%d\n", oussama);
    return (0);
}

