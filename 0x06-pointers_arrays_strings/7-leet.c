#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
int i, j;
char str[] = "aeotl";
char num[] = "43071";

for (i = 0; s[i]; i++)
{
	for (j = 0; str[j]; j++)
	{
		if (s[i] == str[j] || s[i] == (str[j] - 32))
		{
			s[i] = num[i];
		}
	}
}
return (s);
}
