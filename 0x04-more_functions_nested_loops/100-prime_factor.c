#include <stdio.h>

/**
 * main - entry point
 * desc - finds and prints the largest prime factor of the number
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int n, i;

	n = 612852475143;
	while ((n % 2) == 0)
	{
		n = n / 2;
		i = 2;
	}
	while ((n % 3) == 0)
	{
		n = n / 3;
		i = 3;
	}
	for (i = 5; i <= n; )
	{
		while ((n % i) == 0)
		{
			n = n / i;
			i = i;
		}
		i = i + 2;
	}
	printf("%ld\n", i);
	return (0);
}
