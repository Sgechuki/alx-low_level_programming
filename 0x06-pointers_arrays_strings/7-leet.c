#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
int i, j;
char str[] = "aAeEoOtTlL";
char num[] = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; str[j] != '\0'; j++)
	{
		if (s[i] == str[j])
		{
			s[i] = num[j];
			break;
		}
	}
}
return (s);
}
