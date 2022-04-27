#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s:
 * @accept
 * Return:
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

i = 0;
j = 0;
while (accept[j])
{
if (s[0] == accept[j])
{
	i++;
	*s++
}
j++;
}
return (i);
}
