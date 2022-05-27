#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Adds new node at the end of a listint_t list
 * @head: pointer to header
 * @n: integer
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *end_node;

	temp = *head;
	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->n = n;
	end_node->next = NULL;
	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = end_node;
	return (end_node);
}
