#include "lists.h"

/**
 * sum_dlistint - function that returns the sum
 * of all the data (n) of a dlistint_t linked list
 * @head: head node
 * Return: sum of all the data (n) or 0 if list empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int i = 0;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp != NULL)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}
