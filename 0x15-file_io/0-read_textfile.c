#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- to Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: the number of letters to be read
 * Return: c - actualy number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *puf;
	ssize_t gd;
	ssize_t c;
	ssize_t m;

	gd = open(filename, O_RDONLY);
	if (gd == -1)
		return (0);
	puf = malloc(sizeof(char) * letters);
	m = read(gd, puf, letters);
	c = write(STDOUT_FILENO, puf, m);

	free(puf);
	close(gd);
	return (c);
}
