#include "main.h"

/**
 * print_binary - printing  the 
 * binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int oussama;
	unsigned long int count_oussama = 0;
	unsigned long int current_oussama;

	for (oussama = 63; oussama >= 0; oussama--)
	{
		current_oussama = n >> oussama;

		if (current_oussama & 1)
		{
			_putchar('1');
			count_oussama++;
		}
		else if (count_oussama)
			_putchar('0');
	}
	if (!count_oussama)
		_putchar('0');
}

