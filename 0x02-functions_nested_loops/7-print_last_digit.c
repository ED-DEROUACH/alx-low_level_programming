#include "main.h"
/**
 * print_last_digit - function that prints last digit
 * @n: function parameter
 *
 * Return: last_digit
 */
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
n = -n;
last_digit = n % 10;
putchar(last_digit + '0');
return (last_digit);
}
