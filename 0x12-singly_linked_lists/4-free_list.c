#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: the start of the linked list
 *
 */
void free_list(list_t *head)
{
	list_t *h;

	while (head != NULL)
	{
		h = head;
		head = head->next;
		free(h->str);
		free(h);
	}
	free(head);
}
