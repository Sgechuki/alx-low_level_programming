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
	int *first;
	int *last;
	int mid;
	int pos;

	if (array == NULL)
		return (-1);
	pos = (int) size - 1;
	first = array;
	mid = pos / 2;
	last = array + pos;
	while (array[mid] >= *first && array[mid] <= *last)
	{
		printf("Searching in array:");
		print_arr(first, last);
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
		{
			last = array + (mid - 1);
			mid = mid / 2;
		}
		else
		{
			first = array + (mid + 1);
			mid = (mid + 1) + ((pos - (mid + 1)) / 2);
		}
	}
	return (-1);
}

/**
 * print_arr - prints all elements in array
 * @first: pointer to first element
 * @last: pointer to last element
 *
 */
void print_arr(int *first, int *last)
{
	int i = 0;

	while ((first + i) < last)
	{
		printf(" %d,", *(first + i));
		i++;
	}
	printf(" %d\n", *last);
}
