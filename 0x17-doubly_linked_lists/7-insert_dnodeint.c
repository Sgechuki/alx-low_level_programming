#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head node
 * @idx: index of the list where the new node should be added
 * Index starts at 0
 * @n: element of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *temp1, *temp2;
	unsigned int i;

	i = 1;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (*h == NULL)
	{
		*h = node;
		return (node);
	}
	temp1 = *h;
	if (idx == 0)
	{
		temp1->prev = node;
		*h = node;
		node->next = temp1;
		return (node);
	}
	while (temp1->next != NULL)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		if (i == idx)
		{
			node->prev = temp2;
			temp2->next = node;
			temp1->prev = node;
			node->next = temp1;
			return (node);
		}
		i++;
	}
	return (NULL);
}
