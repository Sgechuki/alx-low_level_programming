#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements of an array
 *
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		i++;
		n--;
	}
}
