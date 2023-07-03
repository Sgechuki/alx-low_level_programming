#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at given index
 * @head: pointer to head node
 * @index: position of node to be deleted
 * Return: 1 if successful or -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *temp1;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	for (i = 0; temp && i < index; i++)
	{
		if (i == index - 1)
		{
			temp1 = temp;
		}
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	temp1->next = temp->next;
	free(temp);
	return (1);
}
