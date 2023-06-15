#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = (unsigned int *) malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
