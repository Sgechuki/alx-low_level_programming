#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string containing words to be capitalized
 * Retrun: pointer to the capitalized string
 */
char *cap_string(char *s)
{
int i, j;
char c[] = {44, 59, 46, 63, 123, 125, 33, 32, 10, 9, 34, 40, 41};

i = 0;

while (s[i] != '\0')
{
if (i == 0 && s[i] >= 97 && s[i] <= 122)
{
s[i] = s[i] - 32;
}
j = 0;
while (c[j] != '\0')
{
if (c[j] == s[i] && s[i + 1] >= 97 && s[i + 1] <= 122)
{
s[i + 1] = s[i + 1] - 32;
}
j++;
}
i++;
}
return (s);
}
