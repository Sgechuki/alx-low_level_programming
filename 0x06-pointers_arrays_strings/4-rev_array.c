#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array
 * @n: number of elements of the array
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
