#include "main.h"

/**
 * print_times_table - prints the n times table starting from 0
 * @n: the size of times table
 * Return: Always void
 */
void print_times_table(int n)
{
if (n <= 0 || n > 15)
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
	if ( j != 0 && rst <= 9)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	else if (j != 0 && rst > 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	if (rst < 10)
	{
	_putchar(rst + '0');
	}
	else if (rst >= 10)
	{
	_putchar((rst / 10) + '0');
	_putchar((rst % 10) + '0');
	}
}
_putchar('\n');
}
}
}
