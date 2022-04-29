#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to find natural square root
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	int i;

	i = ;
	if (n == 1)
	{
		return (1);
	}
	else if (n <= 0)
	{
		return (-1);
	}
	i = i + 1;
	if ((i * i) == n)
	{
		return (i);
	}
	_sqrt_recursion(n);
}
