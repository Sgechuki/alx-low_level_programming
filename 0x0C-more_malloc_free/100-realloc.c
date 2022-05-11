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
	if (ptr == NULL)
	{
		ptr = (char *) malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size || new_size < old_size)
	{
		ptr = (char *) malloc(new_size);
		return (ptr);
	}
}
