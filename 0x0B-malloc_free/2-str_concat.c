#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer to new location or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *ar;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	ar = malloc(sizeof(char) * (i + j + 1));
	if (ar == NULL)
	{
		return (0);
	}
	for (k = 0; k < i; k++)
	{
		ar[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
		ar[i + l] = s2[l];
	}
	ar[i + j] = '\0';
	return (ar);
}
