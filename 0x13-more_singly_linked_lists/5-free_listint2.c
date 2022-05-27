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

	temp = *head;
	while (*head != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
