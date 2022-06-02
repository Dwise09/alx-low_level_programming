#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int z;
	int ojo;
	int y;

	if (!filename)
		return (-1);

	z = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (z == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (ojo = 0; text_content[ojo]; ojo++)
		;

	y = write(z, text_content, ojo);

	if (y == -1)
		return (-1);

	close(z);

	return (1);
}
