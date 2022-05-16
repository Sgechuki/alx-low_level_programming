#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function on each array's element
 * @size: size of array
 * @action: pointer to function to be used
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
