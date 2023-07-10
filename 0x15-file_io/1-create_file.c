#include "main.h"

/**
 * create_file - to Creates a file.
 * @filename: thepointer to the name of the file to create.
 * @text_content: the pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int gn, y, pen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (pen = 0; text_content[pen];)
			pen++;
	}

	gn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(gn, text_content, pen);

	if (gn == -1 || y == -1)
		return (-1);

	close(gn);

	return (1);
}
