#include <stdio.h>
/**
 * main - entry point
 * Desc - prints first 50 Fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, count;

	count = 0;
	for (i = 0; i < 50; i++)
	{
		count++;
		if (count < 2)
		{
			printf("%d, ", count);
		}
		else if (count == 2)
		{
			printf("%d\n", count);
		}
		else if (count > 2 && i < 49)
		{
			printf("%d, ", ((count - 2) + (count -1)));
		}
		else
		{
			printf("%d", count);
		}
	}
}
