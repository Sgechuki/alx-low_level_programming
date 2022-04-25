#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string containing words to be capitalized
 * Retrun: a capitalized string
 */
char *cap_string(char s*)
{
int i;

i = 0;
while (s[i] != '\0')
{
if (i == 0)
{
	if (s[i] >= 97 && s[i] <= 122)
	{
		s[i] = s[i] - 32;
		i++;
	}
}
if (s[i] == 20 || s[i] == '\t' || s[i] == '\n' || s[i] == 44 || s[i] == 59 ||s[i] == 46 || s[i] == 21 || s[i] == 63 || s[i] == 22 || s[i] == 28 || s[i] == 29 || s[i] == 123 || s[i] == 125)
{
i++;
	if (s[i] >= 97 && s[i] <= 122)
	{
		s[i] = s[i] - 32;
		i++;
	}
}
}
return (s);
}
