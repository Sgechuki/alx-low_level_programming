#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, k;
	unsigned int sum = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
	}
	j = i - 1;
	k = 0;
	for (; b[j]; j--)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		if (b[j] == '1')
		{
		sum += (1 << k);
		}
		k++;
	}
	return (sum);
}
