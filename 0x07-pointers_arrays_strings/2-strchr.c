#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string array
 * @c: character variable
 * Return; pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
int i;
char *p = NULL;

while (s[i] != '\0')
{
if (s[i] == c)
{
p = (s + i);
break;
}
}
return (p);
}
