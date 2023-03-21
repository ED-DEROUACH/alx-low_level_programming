#include "main.h"
#include <stdio.h>
/*
 * La fonction fibonacci génère
 * les n premiers nombres de
 * la séquence de Fibonacci.
 * Elle prend en entrée le
 * nombre de termes à
 * générer (n) et retourne
 * le premier terme de la séquence.
 */
int fibonacci(int n)
{
int a = 1, b = 2, c;
int i;
printf("%d, %d, ", a, b);
for (i = 3; i <= n; i++)
{
c = a + b;
printf("%d", c);
if (i != n)
{
printf(", ");
}
else
{
printf("\n");
}
a = b;
b = c;
}
return (a);
}
/*
 * La fonction principale appelle la fonction
 * fibonacci avec un argument
 * de 98 pour générer les 98
 * premiers nombres de la séquence de Fibonacci.
 */
int main(void) {
fibonacci(98);
return (0);
}
