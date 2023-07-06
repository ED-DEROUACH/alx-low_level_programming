#include <stdio.h>
#include "main.h"

/**
 * clear_bit -seting the value of a given bit to 0
 * @oussama: pointing the number to change
 * @oussamix: to index of the bit to clear
 *
 * Return: 1for success, -1for failure
 */
int clear_bit(unsigned long int *oussama, unsigned int oussamix)
{
	if (oussamix > 63)
		return (-1);

	*oussama = (~(1UL << oussamix)& *oussama);
	return (1);
}
