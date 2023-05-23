#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number printing should start
 * Return: Always void
 */
void print_to_98(int n)
{
if (n > 98)
{
int i;

for (i = n; i >= 98; i--)
{
if (i != 98)
{
printf("%d, ", i);
}
else if (i == 98)
{
printf("%d\n", i);
}
}
}
else if (n <= 98)
{
int j;

for (j = n; j <= 98; j++)
{
if (j != 98)
{
printf("%d, ", j);
}
else if (j == 98)
{
printf("%d\n", j);
}
}
}
}
