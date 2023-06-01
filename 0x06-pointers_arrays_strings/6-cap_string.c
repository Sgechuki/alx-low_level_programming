#include "main.h"

/**
 * cap_string  - capitalizes all  words of a string
 * @s: string to be capitalized
 * Return: pointer to capitalized string
 */

char *cap_string(char *s)
{
	char delim [] = {44, 59, 46, 63, 123, 125, 33, 32, 10, 9, 34, 40, 41};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 0 && s[i] >= 97 && s[0] <= 122)
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; delim != '\0'; j++)
		{
			if (s[i] == delim[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}
