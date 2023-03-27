#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Description: This function takes two pointers to integers as arguments.
 * It uses a temporary variable to store the value of the first integer,
 * then assigns the value of the second integer to the first integer,
 * and finally assigns the value of the temporary variable (which holds
 * the original value of the first integer) to the second integer.
 * This effectively swaps the values of the two integers.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
