#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i;

	if (!h)
	{
		return (0);
	}
	temp = h;
	i = 0;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
