#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int z, n;
	int y;

	if (!filename)
		return (-1);

	z = open(filename, O_WRONLY | O_APPEND);

	if (z == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		y = write(z, text_content, n);

		if (y == -1)
			return (-1);
	}

	close(z);

	return (1);
}
