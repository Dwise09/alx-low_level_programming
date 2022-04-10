#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)

{
int number;

for (number = 0; number <= 10; number++)
{
putchar(number);

if (number == 10)
{
break;
}

putchar('.');
putchar(' ');
}

putchar('\n');

return (0);

}
