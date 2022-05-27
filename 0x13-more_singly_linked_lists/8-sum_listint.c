#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - returns sum of all the data of a listint_t linked list
 * @head: head node of listint_t list
 * Return: sum of node->n or 0 if list empty
 */
int sum_listint(listint_t *head)
{
	int i;

	i = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		i += (int) head->n;
		head = head->next;
	}
	return (i);
}
