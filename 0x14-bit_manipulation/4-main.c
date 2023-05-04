#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int oussama;

    oussama = 1024;
    clear_bit(&oussama, 10);
    printf("%lu\n", oussama);
    oussama = 0;
    clear_bit(&oussama, 10);
    printf("%lu\n", oussama);
    oussama = 98;
    clear_bit(&oussama, 1);
    printf("%lu\n", oussama);
    return (0);
}

