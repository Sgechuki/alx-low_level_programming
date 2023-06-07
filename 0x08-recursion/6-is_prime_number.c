#include "main.h"
int is_prime_number_1(int n, int i);

/**
 * is_prime_number - finds whether given number is a prime number
 * @n: number to find if prime number
 * Return: 1 if n is prime, 0 if not prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_number_1(n, 1));
}
/**
 * is_prime_number_1 - finds if given number is a prime number
 * @n: number to find if prime
 * @i: iteration starting from a small integer
 * Return: 1 if prim, 0 if not prime
 */
int is_prime_number_1(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (i != 1 && n % i == 0)
	{
		return (0);
	}
	return (is_prime_number_1(n, i + 1));
}
