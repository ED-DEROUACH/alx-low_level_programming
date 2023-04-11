0x0B. C - malloc, free
This repository contains practical exercises to learn dynamic memory allocation in C using the malloc, calloc, and free functions.

Files
The files in this repository are organized as follows:

Folder	Description
0-create_array.c	Creates an array of characters initialized with a specific character.
1-strdup.c	Duplicates a string.
2-str_concat.c	Concatenates two strings.
3-alloc_grid.c	Creates a dynamically allocated grid of integers.
4-free_grid.c	Frees the memory allocated by the alloc_grid function.
5-argstostr.c	Concatenates all the arguments of your program.
100-strtow.c	Splits a string into words.
main.h	Header file containing the function prototypes.
How to Use
To use these functions, you can include the main.h header file in your program and call the functions as follows:

c
Copy code
#include "main.h"

int main(void)
{
    char *str = "Hello, world!";
    char *array = create_array(10, 'X');
    char *duplicate = _strdup(str);
    char *concatenated = str_concat("Hello", "world");
    int **grid = alloc_grid(3, 3);
    char *args = argstostr(2, "Hello", "world");
    char **words = strtow("    Hello,     world   ");

    /* Use the arrays and strings */

    free(array);
    free(duplicate);
    free(concatenated);
    free_grid(grid, 3);
    free(args);
    free_tab(words);

    return (0);
}
Note that you should always free the dynamically allocated memory with the free function.

How to Compile
To compile these files, you can use the following commands:

bash
Copy code
gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-create_array.c -o a.out
gcc -Wall -Werror -Wextra -pedantic 1-main.c 1-strdup.c -o a.out
gcc -Wall -Werror -Wextra -pedantic 2-main.c 2-str_concat.c -o a.out
gcc -Wall -Werror -Wextra -pedantic 3-main.c 3-alloc_grid.c -o a.out
gcc -Wall -Werror -Wextra -pedantic 4-main.c 4-free_grid.c -o a.out
gcc -Wall -Werror -Wextra -pedantic 5-main.c 5-argstostr.c -o a.out
gcc -Wall -Werror -Wextra -pedantic 100-main.c 100-strtow.c -o a.out
Make sure to use the -Wall flag to enable all compiler warnings and the -pedantic flag to ensure compliance with ANSI/ISO standards.

Author
This repository was created by ED-DEROUACH.

License
This project is licensed under the MIT License. See the LICENSE file.
