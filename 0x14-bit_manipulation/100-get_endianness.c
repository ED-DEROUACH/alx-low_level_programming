#include "main.h"

/**
 * get_endianness - checking if a 
 * machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int oussama = 1;
	char *edderouach = (char *) &oussama;

	return (*edderouach);
}

