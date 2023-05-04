#include "main.h"

/**
 * binary_to_uint - converting  a binary number to unsigned int
 * @b: string contain  the binary number
 *
 * Return: the converted number decim_oussama
 */
unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int decim_oussama = 0;

	if (!b)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] < '0' || b[l] > '1')
			return (0);
		decim_oussama = 2 * decim_oussama + (b[l] - '0');
	}

	return (decim_oussama);
}

