#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string array
 * @c: character variable
 * Return: pointer to first occurence of c or NULL
 */
char *_strchr(char *s, char c)
{
int i;

i = 0;
while (s[i])
{
	if (s[i] == c)
	{
		return (s + i);
	}
	i++;
}
return (NULL);
}
