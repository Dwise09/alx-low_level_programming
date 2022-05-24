#include "lists.h"

/**
 * print_list - prints all the elements  a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
size_t david;
david = 0;
const list_t *love = h
while (love != NULL)
{
if (love-> str == NULL)
printf("[%d] %s\n", 0,"(nil)");
else
printf("[%d] %s\n", love-> len, love-> str);
love = love-> next;
david++;
}
return(david);
}
