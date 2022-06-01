#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long integer
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;
	int bit;

	if (index > 63)
	{
		return (-1);
	}
	i = n >> index;
	bit = (i & 1);
	return (bit);
}
