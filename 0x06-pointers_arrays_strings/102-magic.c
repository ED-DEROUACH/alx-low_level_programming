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
int a[] = {0, 1, 2, 3, 4};
int *p;

p = &a[2];
*p = 98;

printf("a[2] = %d\n", a[2]);
return (0);
}
