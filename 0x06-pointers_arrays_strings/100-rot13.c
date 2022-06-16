#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: pointer to string
 */
char *rot13(char *s)
{
	int i, j;
	char str[] = "abcdefghijklm";
	char alp[] = "nopqrstuvwxyz";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; str[j] && alp[j]; j++)
		{
			if (s[i] == str[j] || s[i] == (str[j] - 32))
			{
				s[i] = (s[i] + 13);
				break;
			}
			else if (s[i] == alp[j] || s[i] == (alp[j] - 32))
			{
				s[i] = (s[i] - 13);
				break;
			}

		}
	}
	return (s);
}
