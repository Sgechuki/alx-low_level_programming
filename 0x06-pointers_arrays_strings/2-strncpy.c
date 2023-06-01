#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string
 * @src: string to be copied
 * @n: bytes to be copied
 * Return: pointer to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, k;

	j = 0;
	i = 0;
	k = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	while (src[k] != '\0' && k < n)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	while (k < n)
	{
		dest[i] = '\0';
		i++;
		k++;
	}
	return (dest);
}
