#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates memory block using malloc
 * @ptr: pointer to already allocated memory
 * @old_size: size of memory space already allocated
 * @new_size: size of memory to be reallocated
 * Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	char *optr;
	unsigned int i;

	optr = ptr;
	if (new_size == 0 && optr != NULL)
	{
		free(ptr);
		return (0);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	nptr = (char *) malloc(new_size);
	if (nptr == NULL)
	{
		free(nptr);
		return (0);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			nptr[i] = optr[i];
		}
	}
	else if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			nptr[i] = optr[i];
		}
	}
	free(ptr);
	return (nptr);
}
