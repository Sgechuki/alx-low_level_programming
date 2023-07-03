#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head node
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *temp1;

	if (head == NULL || *head == NULL)
	{
		return (*head);
	}
	temp = *head;
	temp1 = temp->next;
	temp->next = NULL;
	while (temp1 != NULL)
	{
		temp = temp1->next;
		temp1->next = *head;
		*head = temp1;
		temp1 = temp;
	}
	return (*head);
}
