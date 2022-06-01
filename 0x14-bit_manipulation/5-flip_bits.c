#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: returns the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int k = 0, sum = 0;

	i = n ^ m;
	for (; k < 64; k++)
	{
		if (i & 1)
		{
			sum += 1;
		}
		i = i >> 1;
	}
	return (sum);
}
