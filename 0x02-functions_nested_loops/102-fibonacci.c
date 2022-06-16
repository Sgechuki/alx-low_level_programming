#include <stdio.h>
/**
 * main - entry point
 * Desc - prints first 50 Fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int count = 2;
	long int i = 1, j = 2, k;

	printf("%ld, %ld ,", i, j);
	for ( ; count < 50; count++)
	{
		k = i + j;
		printf("%ld", k);
		if (count < 50)
		{
			printf(", ");
		}
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
