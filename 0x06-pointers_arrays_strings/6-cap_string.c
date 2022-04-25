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
	}
}
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' ||s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
{
i++;
	if (s[i] >= 97 && s[i] <= 122)
	{
		s[i] = s[i] - 32;
	}
}
}
return (s);
}
