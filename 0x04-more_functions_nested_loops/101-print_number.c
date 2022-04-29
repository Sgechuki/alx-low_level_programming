#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		i = -1 * n;
	}
	else
	{
		i = n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
