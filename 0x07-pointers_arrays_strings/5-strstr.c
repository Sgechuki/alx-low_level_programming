#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: string to search
 * Return: to beginning of substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int len1 = 0, len2 = 0, i, j;

	while (haystack[len1] != '\0')
	{
		len1++;
	}
	for (; needle[len2] != '\0'; len2++)
	{
	}
	for (i = 0; i < len1; i++)
	{
	for (j = 0; j < len2; j++)
	{
		if (haystack[i + j] != needle[j])
		{
			break;
		}
	}
	if (j == len2)
	{
		return (haystack + i);
	}
	}
	return (NULL);
}
