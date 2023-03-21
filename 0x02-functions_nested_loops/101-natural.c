#include <stdio.h>
/**
 * main - main fonction
 * @sum: variable
 * Return: always 0
 */
void main(int sum)
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
return (sum);
}
