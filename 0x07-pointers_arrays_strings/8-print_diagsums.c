#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print sum of each diagonals
 * @a: square matrix to sum diagonals
 * @size: size of square matrix
 *
 */
void print_diagsums(int *a, int size)
{
int i, j, sum1, sum2;

sum1 = 0;
sum2 = 0;
j = size - 1;
for (i = 0; i < size; i++)
{
sum1 = sum1 + a[size * i + i];
sum2 = sum2 + a[j *i + j];
}
printf("%d, %d\n", sum1, sum2);
}
