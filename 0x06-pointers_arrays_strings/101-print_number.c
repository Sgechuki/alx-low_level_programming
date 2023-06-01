#include "main.h"

/**
 * print_number -  prints an integer
 * @n: pointer to integer
 *
 */
void print_number(int n)
{
	int pv = 1, copy1, copy2, ones = n % 10;

	copy1 = n / 10;
	copy2 = n / 10;
	if (ones < 0)
	{
		copy1 *= -1;
		copy2 *= -1;
		ones *= -1;
		_putchar('-');
	}
	if (copy1 > 0)
	{
	while (copy1 / 10 != 0)
	{
		pv *= 10;
		copy1 /= 10;
	}
	while (pv > 0)
	{
		_putchar((copy2 / pv) + '0');
		copy2 -= (copy2 / pv) * pv;
		pv = pv / 10;
	}
	}
	_putchar(ones + '0');
}
