#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: pointer to head node
 * @idx: index to insert new node
 * @n: data of new node
 * Return: address of new node or NULL on fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	i = 0;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while ((*head)->next != NULL)
	{
		if (idx > 0 && i == (idx - 1))
		{
			new_node->next = (*head)->next;
			(*head)->next = new_node;
			return (new_node);
		}
		else if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		*head = (*head)->next;
		i++;
	}
	return (NULL);
}
