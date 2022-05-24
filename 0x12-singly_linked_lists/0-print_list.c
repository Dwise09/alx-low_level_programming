#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all lis element
 * @h: list head
 *
 * return: nodes numbers
 */

size_t print_list(const list_t *h)
{

size_t david;
david = 0;

while (h != NULL)
{

if (h->str == NULL)
printf("[%d] %s\n", 0, "(nil)");

else
printf("[%d] %s\n", h->len, h->str);
h = h-> next;
david++

}

return(david);

}


