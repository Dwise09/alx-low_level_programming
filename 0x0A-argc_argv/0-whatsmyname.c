#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: counts the number of parameter that go into the main
 * @argv:array of pointers in the main containing strings
 *
 * return: Zero (0) success
 */

int main(int argc, char **argv)
{

if (argc > 0)
{
printf("%s\n", argc[0]);
}

return (0);
}
