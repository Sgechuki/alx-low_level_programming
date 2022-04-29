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
	int i, j;
	int d1, d2;

	d1 = 0;
	d2 = 0;
	j = size;
	for (i = 0; i < size; i++)
	{
		d1 = d1 + a[i][i];
		d2 = d2 + a[i][j - 1];
		j--;
	}
}


