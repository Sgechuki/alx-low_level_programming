#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: node
 * Return: returns the number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i = 0;

	if (!h)
	{
		return (0);
	}
	temp = h;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
