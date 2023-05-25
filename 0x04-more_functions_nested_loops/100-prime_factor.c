#include <stdio.h>

/**
 * main - entry point
 * desc - finds and prints the largest prime factor of the number
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int n, i = 2;

	n = 612852475143;
	while (i * i < n)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
		i++;
	}
	printf("%ld\n", n);
	return (0);
}
