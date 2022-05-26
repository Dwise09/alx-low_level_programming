#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *david;
david = malloc(sizeof(listint_t));

if (david == NULL)
	return (NULL);

david->n = n;
david->next = *head;
*head = david;

return (*head);
}
