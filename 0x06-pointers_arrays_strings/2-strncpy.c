#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: number of characters(bytes) to be copied
 * Return: Always a pointer to string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i, j;

for (i = 0; *(dest + i) != '\0'; i++)
{
}
for (j = 0; j < n && *(src + j) != '\0'; j++)
{
if ( n < i)
{
dest[j] = src[j];
}
}
dest[j] = '\0';
return (dest);
}
