#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, k;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		for (k = 1; k <= 9; k++)
		{
			putchar(k + '0');
		}
	}
	putchar('\n');
	return (0);
}
