#include <stdio.h>
/**
 * main - Cette fonction calcule et imprime
 * la somme de tous les multiples de 3 ou de 5
 * inférieurs à 1024 (exclus).
 */
void main(void)
{
int sum = 0;
for (int i = 1; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
}
