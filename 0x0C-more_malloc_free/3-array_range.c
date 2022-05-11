#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value in array
 * @max: maximum value in array
 * Return: pointer to the array or NULL on fail
 */
int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
	{
		return (0);
	}
	i = ((max - min) + 1);
	ptr = (int *) malloc(sizeof(int) * i);
	if (ptr == NULL)
	{
		return (0);
	}
	for (j = 0; j < i;)
	{
		ptr[j] = min + j;
		j++;
	}
	return (ptr);
}
