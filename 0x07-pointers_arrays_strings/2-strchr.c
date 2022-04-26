#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string array
 * @c: character variable
 * Return; pointer to first occurence of c or NULL
 */
char *_strchr(char *s, char c)
{
int i;
int j;

i = 0;
j = 0;
while (s[i] != '\0')
{
j++;
if (s[i] == c)
{
return (s + i);
}
if (s[j + 1] == '\0')
{
return (NULL);
}
i++;
}
}
