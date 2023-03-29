#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
char str[] = "Expect The Best. Prepare For The Worst"
". Capitalize On What Comes.\n"
"Hello World! Hello-world 0123456hello World Hello World.Hello World\n"
"Expect The Best. Prepare For The Worst. Capitalize On What Comes.\n"
"Hello World! Hello-world 0123456hello World Hello World.Hello World\n";
char *ptr;

ptr = cap_string(str);
printf("%s", ptr);
printf("%s", str);
return (0);
}
