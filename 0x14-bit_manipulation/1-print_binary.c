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
	while (n == 0)
	{
		printf("%ld", n & 1);
		n = (n >> 1);
	}
	printf("\n");
}
