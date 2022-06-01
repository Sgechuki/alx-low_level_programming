#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: long integer
 *
 */
void print_binary(unsigned long int n)
{
	while (n != 0)
	{
		_putchar((n & 1) + '0');
		n = (n >> 1);
	}
	_putchar('\n');
}
