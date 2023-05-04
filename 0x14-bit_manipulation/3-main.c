#include <stdio.h>
#include "main.h"

/**
 * main - checking the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int oussama;

    oussama = 1024;
    set_bit(&oussama, 5);
    printf("%lu\n", oussama);
    oussama = 0;
    set_bit(&oussama, 10);
    printf("%lu\n", oussama);
    oussama = 98;
    set_bit(&oussama, 0);
    printf("%lu\n", oussama);
    return (0);
}

