#include "lists.h"

/**
 * add_node - adds a new node at beginning of a linked list
 * @head: double pointer to list_t
 * @str: new string value
 * Return: the address of the new element, or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *dav_node;
	unsigned int len = 0;

        while (str[len])
		len++;

        dav_node = malloc(sizeof(list_t));
	if (!dav_node)
		return (NULL);

        dav_node->str = strdup(str);
	dav_node->len = len;
	dav_node->next = (*head);
	(*head) = dav_node;

return (*head);
}
