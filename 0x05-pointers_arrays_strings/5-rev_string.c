#include "main.h"

/**
 * rev_string - reverses a string
 * @s: holds string
 * Return: Always void
 */
void rev_string(char *s)
{
int cnt, i;

for (cnt = 0; *(s + cnt) != ' '; cnt++)
{
}
for (i = cnt - 1; i >= 0; i--)
{
_putchar(*(s + i));
}
}
