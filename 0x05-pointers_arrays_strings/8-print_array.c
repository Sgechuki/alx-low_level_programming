#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array
 * @a: is array
 * @n:number of elements to be printed
 * return: always void
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", *(a + i));
if (i < (n - 1))
{
printf(", ");
}
}
printf("\n");
}
