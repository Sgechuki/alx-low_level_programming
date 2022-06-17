#include <stdio.h>
/**
 * main - entry point
 * Desc - finds and prints the sum of the even-valued terms
 * Return: Always 0 (success)
 */

int main(void)
{
	long int i = 1, j = 2, sum = 2;

	while (j < 4000000)
	{
		j = i + j;
		i = j - i;
		if ((j % 2) == 0)
		{
			sum += j;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
