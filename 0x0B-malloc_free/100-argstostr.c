#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac:number of arguments
 * @av:array of arguments
 * Return: NULL on failure or pointer when successful
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l, len, len2, len3;
	char *arr;

	if (ac == 0 || av == NULL)
	{
		return (0);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
		}
		len += j;
	}
	arr = malloc(sizeof(char) * len + ac + 1);
	if (arr == NULL)
	{
		return (0);
	}
	len2 = 0;
	len3 = (sizeof(char) * len + ac + 1);
	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l]; l++)
		{
			arr[len2] = av[k][l];
			len2++;
		}
		arr[len2] = '\n';
		len2++;
	}
	arr[len3 - 1] = '\0';
	return (arr);
}
