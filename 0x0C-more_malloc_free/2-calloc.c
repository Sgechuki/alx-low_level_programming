#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb:size of array
 * @size: size of type
 * Return: pointer to new memory or NULL on fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char i;
	unsigned int *arr;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	arr = malloc(size * nmemb);
	if (arr == NULL)
	{
		return (0);
	}
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
