#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array of integers
 * @n: number of elements an array
 * Return: Always void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < (n / 2))
	{
		temp = a[i];
		a[i] = a[n - i -1];
		a[n - i - 1] = temp;
		i++;
	}
}
