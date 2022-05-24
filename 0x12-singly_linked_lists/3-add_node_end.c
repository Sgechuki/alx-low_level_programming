#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds new node at the end of a list_t list
 * @head: pointer to first node
 * @str: string
 * Return: address of new element or NULL on fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	list_t *h;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->str = strdup(str);
	end_node->len = strlen(str);
	end_node->next = NULL;
	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	h = *head;
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = end_node;
	return (end_node);
}
