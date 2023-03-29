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
"---------------------------------\n"
"00000000: 5468 6973 2069 7320 6120 This is a\n"
"0000000a: 7374 7269 6e67 2100 416e string!.An\n"
"00000014: 6420 7468 6973 2069 7320 d this is \n"
"0000001e: 7468 6520 7265 7374 206f the rest o\n"
"00000028: 6620 7468 6520 2362 7566 f the #buf\n"
"00000032: 6665 7220 3a29 0102 0304 fer :)....\n"
"0000003c: 0506 0723 6369 7366 756e ...#cisfun\n"
"00000046: 0a00 0000 0000 0000 0000 ..........\n"
"00000050: 0000 0000 0000 0000 0000 ..........\n"
"0000005a: 2021 3456 2370 6f69 6e74  !4V#point\n"
"00000064: 6572 7361 7265 6675 6e20 ersarefun \n"
"0000006e: 2369 6e66 6572 6e75 6d69 #infernumi\n"
"00000078: 7366 756e 0a00           sfun..\n"

printf("%s\n", buffer);
printf("---------------------------------\n");
print_buffer(buffer, sizeof(buffer));
return (0);
}
