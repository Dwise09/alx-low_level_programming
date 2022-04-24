#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;

	while (dest[x] != 0)
	{
		x++;
	}

	y = 0;

	while (src[y] != 0)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
