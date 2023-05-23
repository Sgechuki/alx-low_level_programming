#include <stdio.h>
/**
 * main - entry point
 * Desc - prints first 98 Fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int count = 2;
	long int i = 1, j = 2;

	printf("%ld, ", i);
	printf("%ld, ", j);
	for ( ; count < 98; count++)
	{
		j = i + j;
		i = j - i;
		printf("%ld", j);
		if (count < 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
