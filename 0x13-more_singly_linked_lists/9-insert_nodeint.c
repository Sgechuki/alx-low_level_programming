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
	listint_t *h;

	if (!head)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	h = *head;
	if (idx == 0)
	{
		new_node->next = h;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; h && i < idx - 1; i++)
	{
		h = h->next;
	}
	if (h == NULL)
	{
		return (NULL);
	}
	new_node->next = h->next;
	h->next = new_node;
	return (new_node);
}
