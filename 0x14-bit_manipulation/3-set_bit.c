#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: long unsigned integer
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	 unsigned int i;

	if (index > 63)
	{
		return (-1);
	}
	for (i = 0; i <= index; i++)
	{
		if (index == i)
		{
			*n = (*n | 1);
			for ( ; i >= 1; i--)
			{
				*n = *n << 1;
			}
			break;
		}
		*n = *n >> 1;
	}
	return (*n);
}
