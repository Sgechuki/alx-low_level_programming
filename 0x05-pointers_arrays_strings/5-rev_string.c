#include "main.h"

/**
 * rev_string - reverses a string
 * @s: holds string
 * Return: Always void
 */
void rev_string(char *s)
{
int cnt, i,cnt2 = 0;

for (cnt = 0; *(s + cnt) != '\0'; cnt++)
{
}
char temp[cnt + 1];

for (i = cnt - 1; i >= 0; i--)
{
temp[cnt2] = _putchar(*(s + i));
cnt2++;
}
temp[cnt2 + 1] = '\0';
s* = *temp;
}
