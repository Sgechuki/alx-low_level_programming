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
int sum1, sum2;

d1 = 0;
d2 = 0;
j = size - 1;
for (i = 0; i < size; i++)
{
sum1 += a[i][i];
sum2 += a[i][j];
j--;
}
printf("%d, %d\n", sum1, sum2);
}


