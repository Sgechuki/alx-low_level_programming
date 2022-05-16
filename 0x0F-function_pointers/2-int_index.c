#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to integer array
 * @size: number of elements in array
 * @cmp: function pointer
 * Return: -1 if no match or i on first match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		int i;

		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
