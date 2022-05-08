#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if Success or 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j, change;
	int arr[] = {25, 10, 5, 2, 1};
	int *ptr;

	ptr = arr;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i <= 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		change = 0;
		for (j = 0; j < 5; j++)
		{
			if (i >= ptr[j])
			{
				change += (i / ptr[j]);
				if ((i % ptr[j]) == 0)
				{
					break;
				}
				i = (i % ptr[j]);
			}
		}
		printf("%d\n", change);
	}
	return (0);
}
