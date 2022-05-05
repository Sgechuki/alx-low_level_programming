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
	long unsigned int i;
	char *ar;

	if (str == NULL)
	{
		return (0);
	}
	ar = malloc(sizeof(str));
	if (ar == NULL)
	{
		return (0);
	}
	for (i = 0; i < sizeof(str); i++)
	{
		ar[i] = str[i];
	}
	return (ar);
}
