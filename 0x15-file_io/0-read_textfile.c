#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int dav;
	ssize_t car, nwr;
	char *d;

	if (!filename)
		return (0);

	dav = open(filename, O_RDONLY);

	if (dav == -1)
		return (0);

	d = malloc(sizeof(char) * (letters));
	if (!d)
		return (0);

	car = read(dav, d, letters);
	nwr = write(STDOUT_FILENO, d, car);

	close(dav);

	free(d);

	return (nwr);
}
