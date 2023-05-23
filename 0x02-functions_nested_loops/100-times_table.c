#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table starting from 0
 * @n: the size of times table
 * Return: Always void
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
{
}
else
{
int i, j, rst;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
rst = (i * j);
	if (j != 0 && rst <= 9)
	{
	printf(",   %d", rst);
	}
	else if (j != 0 && (rst > 9 && rst <= 99))
	{
	printf(",  %d", rst);
	}
	else if (j != 0 && rst > 99)
	{
	printf(", %d", rst);
	}
	else if (j == 0)
	{
	printf("%d", rst);
	}
}
printf("\n");
}
}
}
