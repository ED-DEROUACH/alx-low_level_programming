#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * La fonction leet prend en entrée une
 * chaîne de caractères s et la transforme
 * en remplaçant les lettres 'e' et 'o' par
 * les chiffres '3' et '0' respectivement.
 * La fonction renvoie un pointeur
 * vers la chaîne de caractères modifiée.
 */
char* leet(char* s)
{
char* p = s;
while (*p != '\0')
{
if (*p == 'e')
{
*p = '3';
} else if (*p == 'o')
{
*p = '0';
}
p++;
}
return (s);
}

/*
 * La fonction main utilise la fonction
 * leet pour transformer une chaîne
 * de caractères et affiche le résultat.
 */
int main(void) {
char s[] = "Expect the best. Prepare for
the worst. Capitalize on what comes.\n";
char *p;
p = leet(s);
printf("%s", p);
printf("%s", s);
return (0);
}
