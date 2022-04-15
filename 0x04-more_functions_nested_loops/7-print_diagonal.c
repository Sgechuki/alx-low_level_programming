#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of time \ should be printed
 * Return: Always void
 */
void print_diagonal(int n)
{
if ( n <= 0)
{
_putchar('\n');
}
else
{
int i = 1;

while (i < (n - 1))
{
_putchar(' ');
i++;
}
_putchar('\');
_putchar('\n');

