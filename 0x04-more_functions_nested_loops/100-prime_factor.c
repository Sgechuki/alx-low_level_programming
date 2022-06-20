#include <stdio.h>
#include <math.h>

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
	i = (int) sqrt(n);
	while (2)
	{
		if (n % i == 0)
		{
			printf("%ld\n", i);
			break;
		}
		i--;
	}
	return (0);
}
