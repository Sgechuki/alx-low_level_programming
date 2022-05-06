#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2d array of int
 * @width: rows of array
 * @height:columns of array
 * Return: pointer to 2D array or NULL if failed
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (0);
		}
	}
	for (j = 0; j < height; j++)
	{
	for (k = 0; k < width; k++)
	{
		arr[j][k] = 0;
	}
	}
	return (arr);
}
