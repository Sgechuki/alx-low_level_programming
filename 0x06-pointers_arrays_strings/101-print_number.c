#include "main.h"

/**
 * print_number -  prints an integer
 * @n: pointer to integer
 *
 */
void print_number(int n)
{
	int pv = 1, copy1 = n, copy2 = n, ones = n % 10;

	if (ones < 0)
	{
		copy1 *= -1;
		copy2 *= -1;
		ones *= -1;
		_putchar('-');
	}
	while (copy1 / 10)
	{
		pv *= 10;
		copy1 /= 10;
	}
	while (pv > 1)
	{
		_putchar((copy2 / pv) + '0');
		copy2 -= (copy2 / pv) * pv;
		pv = pv / 10;
	}
	_putchar(ones + '0');
}
