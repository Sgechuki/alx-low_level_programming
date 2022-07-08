#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list
 * @head: pointer to head node
 * @index:  index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1, *temp2;
	unsigned int i = 0;

	if (!*head)
	{
		return (-1);
	}
	temp1 = *head;
	if (temp1 && index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp1);
		return (1);
	}
	while (temp1 && i < index)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		i++;
	}
	if (temp2->next && i== index)
	{
		temp2->next = temp1->next;
		temp1->next->prev = temp2;
		free(temp1);
		return (1);
	}
	if (!temp2->next && i == index)
	{
		temp2->prev->next = NULL;
		free(temp2);
		return(1);
	}
	return (-1);
}
