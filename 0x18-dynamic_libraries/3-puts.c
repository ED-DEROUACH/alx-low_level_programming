#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to the string to print
 *
 * Description: This function takes a pointer to a string as an argument.
 * It uses a while loop to iterate over each character in the string until
 * it reaches the null terminator. For each character, it calls the `_putchar`
 * function to print the character to stdout. After the loop, it calls
 * `_putchar` again to print a new line character.
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
