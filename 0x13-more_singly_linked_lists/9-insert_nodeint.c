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
	int j = n;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*head != NULL)
	{
		if (i == (idx - 1))
		{
			new_node->n = j;
			new_node->next = (*head)->next;
			(*head)->next = new_node;
			return (new_node);
		}
		*head = (*head)->next;
		i++;
	}
	return (NULL);
}
