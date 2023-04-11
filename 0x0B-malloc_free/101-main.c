#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of strings
 * @tab: The array to print
 *
 * Return: Nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - Entry point
 *
 * Return: 0 on success, 1 on failure
 */
int main(void)
{
    char **tab;

    /* Call the function to split the string into an array of strings */
    tab = strtow("      ALX School         #cisfun      ");

    /* Check if the function failed */
    if (tab == NULL)
    {
        printf("Failed to split string\n");
        return (1);
    }

    /* Print the resulting array of strings */
    print_tab(tab);

    /* Free the memory allocated by the function */
    free_tab(tab);

    return (0);
}
