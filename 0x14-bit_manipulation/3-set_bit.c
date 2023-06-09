#include "main.h"

/**
 * set_bit -seting abit at agiven index to 1
 * @n: pointer to the number to change
 * @oussama: indexing of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int oussama)
{
	if (oussama > 63)
		return (-1);

	*n = ((1UL << oussama) | *n);
	return (1);
}
