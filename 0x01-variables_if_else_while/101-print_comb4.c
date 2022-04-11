#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{

int i, j, z;
for (i = 48; i < 58; i++)
{

for (j = 48; j < 58; j++)
{
if (i < j)
for (z = 48; z < 58; z++)
{
if (j < z)
{
putchar(i);
putchar(j);
putchar(z);

if (i != 55 || j != 56 || z != 57)
{
putchar(',');
putchar(' ');
}

}

}

}

}

putchar('\n');

return (0);

}
