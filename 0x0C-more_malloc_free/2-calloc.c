#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: size of array
 * @size: size of bytes
 * Return: pointer to new memory or NULL on fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	ptr = (char *) malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (0);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
