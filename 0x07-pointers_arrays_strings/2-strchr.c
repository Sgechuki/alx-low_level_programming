#include <stdlib.h>
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
for (;s[i] != '\0'; i++)
{
	if (s[i] == c)
	{
		s = (s + i);
		return (s)
	}
}
	if (s[i] == '\0')
	{
		return (NULL);
	}
}

