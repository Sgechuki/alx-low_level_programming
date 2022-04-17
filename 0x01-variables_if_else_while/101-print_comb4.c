#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;

for (i = '0'; i <= '7'; i++)
{
	for (j = '1'; j <= '8'; j++)
	{
		for (k = '2'; k <= '9'; k++)
		{
		if (i < j && j < k)
		{
		putchar(i);
		putchar(j);
		putchar(k);
		}
		if (i < j && j < k && i != '7')
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
}
putchar('\n');
return (0);
}
