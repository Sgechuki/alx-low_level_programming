#include "main.h"

/**
 * rev_string - reverses a string
 * @s: holds string
 * Return: Always void
 */
void rev_string(char *s)
{
int cnt, i;
char temp;

for (cnt = 0; *(s + cnt) != '\0'; cnt++)
{
}
for (i = 0; i < (cnt / 2); i++)
{
temp = s[i];
s[i] = s[cnt - i - 1];
s[cnt - i - 1] = temp;
}
}
