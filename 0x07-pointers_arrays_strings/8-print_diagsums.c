#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print sum a square's two diagonals
 * @a: square matrix to sum diagonals
 * @size: size of square matrix
 * Return: always void
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, l, n;
	int d1, d2;

	d1 = 0;
	d2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				d1 = d1 + a[i][j];
				break;
			}
		}
	}
	printf("%i, ", d1);
	n = size;
	for (k = 0; k < size; i++)
	{
		for (l = (size - 1); l >= 0; j--)
		{
			n = n - 1;
			if (l == n)
			{
				d2 = d2 + a[k][l];
				break;
			}
		}
	}
	printf("%i\n", d2);
}
