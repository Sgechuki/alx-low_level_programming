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
			if (i != n && i < n)
			{
				putchar(i);
				putchar(n);
			}
				if (i != '8' && n != '9')
				{
					putchar(',');
				}
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
