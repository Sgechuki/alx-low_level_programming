#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *h;

	h = *head;
	while (h != NULL)
	{
		temp = h;
		h = h->next;
		free(temp);
	}
	free(*head);
}
