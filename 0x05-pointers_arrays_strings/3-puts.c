#include "main.h"

/**
 * _puts - prints a string followed by new line
 *
 * @str: pointer to the string
 * Return void
 */

void _puts(char *str)
{

int i = 0;

for (str[i])
{

_putchar(str[i]);
i++;

}

_putchar('\n');

}
