#include "main.h"
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
    int len = strlen(s);
    int i;

    for (i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return (0);
        }
    }

    return (1);
}
