#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: number of time # should be printed
 * Return: Always void
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if ((size - i - 1) > j)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
