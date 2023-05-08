#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_duffer(char *lom);
void no_file(int m);

/**
 * create_duffer - Allocates 1024 bytes for a buffer.
 * @lom: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_duffer(char *lom)
{
	char *duffer;

	duffer = malloc(sizeof(char) * 1024);

	if (duffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", lom);
		exit(99);
	}

	return (duffer);
}

/**
 * no_file - Closes file descriptors.
 * @m: The file descriptor to be closed.
 */
void no_file(int m)
{
	int b;

	b = close(m);

	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", m);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, no, b;
	char *duffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp from to\n");
		exit(97);
	}

	duffer = create_duffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	no = read(from, duffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || no == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(duffer);
			exit(98);
		}

		b = write(to, duffer, no);
		if (to == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(duffer);
			exit(99);
		}

		no = read(from, duffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (no > 0);

	free(duffer);
	no_file(from);
	no_file(to);

	return (0);
}
