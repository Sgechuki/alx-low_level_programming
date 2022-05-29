#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head node of linked list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *fast;
	const listint_t *slow;

	slow = head;
	fast = head;
	if (head == NULL)
	{
		exit(98);
	}
	i = 0;
	while (slow == NULL)
	{
		if (slow == fast)
		{
			break;
		}
	fast = fast->next->next;
	slow = slow->next;
	i++;
	}
	return (i);
}
