#include "main.h"

/**
 * append_text_to_file - to Appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content:  string to add to the end of the file.
 *
 * Return: If function fails or filename is NULL - -1.
 *         If file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int h, k, mzn = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (mzn = 0; text_content[mzn];)
			mzn++;
	}

	h = open(filename, O_WRONLY | O_APPEND);
	k = write(h, text_content, mzn);

	if (h == -1 || k == -1)
		return (-1);

	close(h);

	return (1);
}
