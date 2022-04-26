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
char *p;

p = "";
i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
p = (s + i);
}
i++;
}
return (p);
}
