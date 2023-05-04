#include "main.h"

/**
 * flip_bits - to count the number of bits to change
 * to get from one number to another
 * @oussama: first number
 * @edderouach: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int oussama, unsigned long int edderouach)
{
	int s, counting = 0;
	unsigned long int actu;
	unsigned long int exclusive = oussama ^ edderouach;

	for (s = 63; s >= 0; s--)
	{
		actu = exclusive >> s;
		if (actu & 1)
			counting++;
	}

	return (counting);
}

