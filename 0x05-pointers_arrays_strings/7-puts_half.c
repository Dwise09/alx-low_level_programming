#include "main.h"

/**
 * puts_half - prints half string then new line
 *
 * @str: pointer to string
 * Return: void
 */

void puts_half(char *str)
{

int len, n, a;
len = 0;
while (str[len] != '\0')
{

len++;

}

if (len % 2 == 0)
{
for (a = len / 2; str[a] != '\0'; a++)
{
_putchar(str[a]);
}

}

else if (len % 2)
{
for (n = (len - 1) / 2; n < len - 1; n++)
{
_putchar(str[n + 1]);
}

}

_putchar('\n');

}
