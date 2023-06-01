#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: pointer to string
 */
char *rot13(char *s)
{
	int i, j;
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alp[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; str[j]; j++)
		{
			if (s[i] == str[j])
			{
				s[i] = alp[j];
				break;
			}
		}
	}
	return (s);
}
