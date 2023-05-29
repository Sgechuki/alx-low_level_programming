#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: variable holding string
 * Return: Always void
 */
void print_rev(char *s)
{
int cnt, i;

for (cnt = 0; *(s + cnt) != '\0'; cnt++)
{
}
for (i = cnt - 1; i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}
