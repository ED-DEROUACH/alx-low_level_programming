#include <stdio.h>

/**
* main - Entry point for the program
*
* This function initializes an
* integer variable, an integer array and a
* pointer, and then performs
* some operations on them.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;
/* The following line assigns the value 98 to the 3rd */
/* element of the array a, without using a or modifying p.*/
*(p + 5) = 98;
/* This should print a[2] = 98. */
printf("a[2] = %d\n", a[2]);
return (0);
}
