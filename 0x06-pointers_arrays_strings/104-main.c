#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char buffer[] = "This is a string!\n"
	"And this is the rest o\n"
	"f the #buf\n"
	"fer :)\1\2\3\4\5\6\7#cisfun\n"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#point\n"
	"ersarefun\n"
	"#infernumi\n"
	"sfun\n";

printf("%s\n", buffer);
printf("---------------------------------\n");
print_buffer(buffer, sizeof(buffer));
return (0);
}
