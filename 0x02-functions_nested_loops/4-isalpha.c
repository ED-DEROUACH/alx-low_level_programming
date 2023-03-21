#include "main.h"
/**
 * _isalpha - checks if a character is a letter
 * @c: character to check
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
char lower, upper;
int isletter = 0;
for (lower = 'a'; lower <= 'z'; lower++)
{
for (upper = 'A'; upper <= 'Z'; upper++)
{
if (c == lower || c == upper)
isletter = 1;
}
}
return (isletter);
}
