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
unsigned int count;

count = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
	if (s[i] == accept[j])
	{
		count += 1;
		break;
	}
	if (s[i] != accept[j] && accept[j + 1] == '\0')
	{
		return (count);
	}
}
}
}
