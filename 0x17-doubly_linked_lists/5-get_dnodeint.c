#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head: head node
 * @index: ndex of the node, starting from 0
 * Return: returns the nth node or return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	if (index == 0)
	{
		return (head);
	}
	temp = head;
	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
