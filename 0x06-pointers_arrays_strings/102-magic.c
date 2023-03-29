#include <stdio.h>

/**
 * main - Entry point
 *@*p: pointer to string params
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[5] = {98, 402, 986, 1024, 4096};
int *p;

p = &a[0];

/* Add your code here */

printf("a[2] = %d\n", *(p + 2));

return (0);
}
