#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: work exactly like strcmp
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && j == 0)
	{
		j = s1[i] - s2[i];
		i++;
	}
	return (j);
}
