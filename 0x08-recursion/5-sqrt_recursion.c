#include "main.h"
int _sqrt_recursion_1(int n, int i);

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to find natural square root
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt_recursion_1(n, 2));
}
/**
 * _sqrt_recursion_1 - iterates to find square root of n
 * @n: number to find natural square root
 * @i: small number to start incrementing from
 * Return: natural square root of n
 */
int _sqrt_recursion_1(int n, int i)
{
	if ((i * i) > n)
	{
		return (-1);
	}
	if ((i * i) == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_recursion_1(n, i + 1));
	}
}

