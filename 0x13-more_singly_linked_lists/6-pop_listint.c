#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of listint_t list
 * @head: pointer to head node
 * Return: head node's data or 0 when linked list is empty
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = (*head)->next;
	i = (int) (*head)->n;
	free(*head);
	*head = temp;
	return (i);
}
