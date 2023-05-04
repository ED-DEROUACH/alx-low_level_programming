0x14. C - Bit Manipulation
This repository contains code examples and exercises related to bit manipulation in the C programming language. The content of this repository is part of the curriculum of the ALX Africa software engineering program.

Description
Bit manipulation is the act of manipulating individual bits of data within a larger data type in order to achieve a desired result. In C programming, this can be done using bitwise operators such as & (bitwise AND), | (bitwise OR), ^ (bitwise XOR), ~ (bitwise NOT), << (left shift), and >> (right shift).

This repository contains various examples and exercises that demonstrate the use of these bitwise operators in different contexts, such as:

Converting between binary and decimal representations of numbers
Setting, clearing, and toggling individual bits within a data type
Checking if a number is a power of 2
Swapping the values of two variables without using a temporary variable
And more
Contents
The repository is organized into several directories, each containing code examples and exercises related to a specific topic. The directories and their contents are as follows:

0-binary_to_uint: A function that converts a binary string to an unsigned integer.
1-print_binary: A function that prints the binary representation of a number.
2-get_bit: A function that returns the value of a bit at a given index.
3-set_bit: A function that sets the value of a bit at a given index to 1.
4-clear_bit: A function that sets the value of a bit at a given index to 0.
5-flip_bits: A function that returns the number of bits needed to be flipped to convert one number to another.
100-get_endianness: A function that checks the endianness of the system.
101-password: A program that prints "Congratulations!" if a specific password is entered correctly.
Usage
To compile and run the code examples and exercises in this repository, navigate to the directory of the desired exercise and use the following commands:

Copy
$ gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <executable>
$ ./<executable>
Replace <filename.c> with the name of the C file, and <executable> with the desired name of the compiled executable. For example, to compile and run the 0-binary_to_uint exercise, you would use the following commands:

Copy
$ gcc -Wall -Werror -Wextra -pedantic 0-binary_to_uint.c -o binary_to_uint
$ ./binary_to_uint
Credits
The code examples and exercises in this repository were created by the ALX Africa software engineering program.
