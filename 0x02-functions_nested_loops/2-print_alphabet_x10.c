#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
char e;
int i = 0;

while (1 < 10)
{
e = 'a';

while (e <= 'z')
{
_putchar(e);
e++;
}

_putchar('\n');
i++;
}

}
