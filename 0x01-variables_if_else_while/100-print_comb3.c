#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, n;

	for (i = '0'; i <= '9'; i++)
	{
		for (n = '1'; n <= '9'; n++)
		{
			if ((i != n && i < n) && (i != '0' && n != '1'))
			{
				putchar(',');
				putchar(' ');
			}
			if (i != n && i < n)
			{
				putchar(i);
				putchar(n);
			}
		}
	}
putchar('\n');
return (0);
}
