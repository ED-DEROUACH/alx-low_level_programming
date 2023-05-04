#include <stdio.h>
#include "main.h"

/**
 * main - checking  the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int oussamaed;

    oussamaed = flip_bits(1024, 1);
    printf("%u\n", oussamaed);
    oussamaed = flip_bits(402, 98);
    printf("%u\n", oussamaed);
    oussamaed = flip_bits(1024, 3);
    printf("%u\n", oussamaed);
    oussamaed = flip_bits(1024, 1025);
    printf("%u\n", oussamaed);
    return (0);
}

