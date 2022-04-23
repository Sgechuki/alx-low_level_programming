#include "main.h"

/**
 * rev_string - reverses a string
 * @s: holds string
 * Return: Always void
 */
void rev_string(char *s)
{
int cnt, i;
cnt2 = 0;
char temp;

for (cnt = 0; *(s + cnt) != '\0'; cnt++)
{
}
for (i = cnt - 1; i >= 0; i--)
{
if (i != cnt2)
{
temp = *(s + cnt2);
*(s + cnt2) = *(s + i);
*(s + i) = temp;
cnt2++;
}
else if (i == cnt2)
{
cnt2++;
}
}
}
