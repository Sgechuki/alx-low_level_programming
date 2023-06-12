#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - pointer to newly allocated space in memeory
 * @str: string to be duplicatd in new memory
 * Return: NULL if insufficient memory or pointer
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *ar;

	if (str == NULL)
	{
		return (0);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
	}
	ar = malloc(sizeof(char) * (j + 1));
	if (ar == NULL)
	{
		return (0);
	}
	for (i = 0; i < j; i++)
	{
		ar[i] = str[i];
	}
	return (ar);
}
