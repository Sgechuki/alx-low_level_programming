#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds new node at beginning of a listint_t list
 * @head: pointer to head node
 * @n: integer
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node;

	first_node = malloc(sizeof(listint_t));
	if (first_node == NULL)
	{
		return (NULL);
	}
	first_node->n = n;
	first_node->next = *head;
	*head = first_node;
	return (*head);
}
