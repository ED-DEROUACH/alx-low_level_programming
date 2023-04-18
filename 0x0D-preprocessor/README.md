0x0D-preprocessor
This repository contains the solutions to the tasks of the 0x0D-preprocessor project, which is part of the low-level programming curriculum at Holberton School.

Introduction
The preprocessor is a program that processes the source code before compilation. It performs various tasks, such as macro expansion, file inclusion, and conditional compilation. In this project, we explore the preprocessor in detail and learn how to use it effectively.

Project Tasks
The project consists of the following tasks:

0. Object-like Macro
Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

1. Pi
Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

2. File name
Create a header file that defines a macro named FILE as the name of the current file.

3. Function-like macro
Write a function-like macro ABS(x) that computes the absolute value of a number x.

4. SUM
Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.

5. Worst abuse of the C preprocessor
Write a program that can print Hello, Holberton followed by a newline.

Getting Started
To get started with the project, clone the repository to your local machine:

shell
Copy code
$ git clone https://github.com/<username>/0x0D-preprocessor.git
Usage
Each task is contained in a separate file in the 0x0D-preprocessor directory. To compile and run a task, use the following commands:

php
Copy code
$ gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <executable>
$ ./<executable>
Replace <filename.c> with the name of the task file, and <executable> with the name you want to give to the compiled program.

Credits
This project was created by Holberton School students.

License
The code in this repository is licensed under the MIT License.
