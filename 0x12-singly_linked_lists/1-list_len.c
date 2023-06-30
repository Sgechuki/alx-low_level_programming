#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - A functions that return number of elements in a linked list
 * @h: linked list
 * Return: number of elemts
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
