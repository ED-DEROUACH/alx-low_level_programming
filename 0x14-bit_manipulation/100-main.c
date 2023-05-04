#include <stdio.h>
#include "main.h"

int main(void)
{
    int oussama;

    oussama = get_endianness();
    if (oussama != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}

