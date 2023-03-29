#include <stdio.h>

/**
* main - Entry point for the program
*
* This function initializes an
* integer variable, an integer array and a
* pointer, and then performs
* some operations on them.
*
* int n;: Déclare une variable n de type int.
* int a[5];: Déclare un tableau a de cinq éléments de type int.
* int *p;: Déclare un pointeur p de type int*.
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
/*
* write your line of code here...
* Remember:
* - you are not allowed to use a
* - you are not allowed to modify p
* - only one statement
* - you are not allowed to code anything else than this line of code
*/
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
