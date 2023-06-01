#include "main.h"

/**
 * _strncat - similar to the _strcat function, except that
 * it will use at most n bytes from src
 * @dest: string to be extended
 * @src: part of string to be used to extend 'dest'
 * @n: maximum bytes to be obtained from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
