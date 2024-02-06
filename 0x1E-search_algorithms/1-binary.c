#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: is the value to search for
 * Return:  index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, first, last;

	first = 0;
	last = size - 1;
	if (array == NULL)
		return (-1);
	for (first = 0, last = size - 1; first <= last;)
	{
		printf("Searching in array:");
		for (i = first; i < last; i++)
		{
			printf(" %d,", array[i]);
		}
		printf(" %d\n", array[i]);
		i = first + ((last - first) / 2);
		if (array[i] == value)
		{
			return (i);
		}
		else if (value < array[i])
		{
			last = i - 1;
		}
		else
		{
			first = i + 1;
		}
	}
	return (-1);
}
