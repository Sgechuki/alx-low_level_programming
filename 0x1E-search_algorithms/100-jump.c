#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value
 * in a sorted array of integers
 * @array: pointer to the first element
 * of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int i;
	int j;

	i = (int) sqrt(size);
	j = 0;
	if (array == NULL || size <= 0)
		return (-1);
	do {
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		j += i;
	} while (array[j] < value && j < (int) size);
	j = j - i;
	printf("Value found between indexes [%d] and [%d]\n", j, j + i);
	for ( ; j <= (j + i) && j < (int) size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			return (j);
		}
	}
	return (-1);
}
