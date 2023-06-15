#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: size of s2 to join to s1
 * Return: pointer to new space or NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *ptr;

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
	if (n < j)
	{
		ptr = (char *) malloc(sizeof(char) * i + n + 1);
	}
	else
	{
		ptr = (char *) malloc(sizeof(char) * (i + j) + 1);
	}
		if (ptr == NULL)
		{
			return (0);
		}
		for (k = 0; k < i; k++)
		{
			ptr[k] = s1[k];
		}
		for (l = 0; l < n && s2[l]; l++)
		{
			ptr[k + l] = s2[l];
		}
		ptr[k + l] = '\0';
		return (ptr);
}
