include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of linked list
 */

void free_list(list_t *head)
{
	list_t *dav;
        dav = head;

        while (head != NULL)
	{
		head = head->next;
		free(dav->str);
		free(dav);
	}
}
