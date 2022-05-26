#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
int david;
listint_t *h;
listint_t *love;

if (*head == NULL)
	return (0);
love = *head;
david = love->n;
h = love->next;
free(love);
*head = h;

return (david);
}
