#include "main.h"

#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: holds string
 * Return: Always void
 */

void puts_half(char *str)
{
int cnt, i, j;

for (cnt = 0; *(str + cnt) != '\0'; cnt++)
{
}
if (cnt % 2 == 0)
{
for (i = cnt / 2; *(str + i) != '\0'; i++)
{
_putchar(*(str + i));
}
}
else
{
for (j = ((cnt - 1) / 2) + 1 ; *(str + j) != '\0'; j++)
{
_putchar(*(str + j));
}
}
_putchar('\n');
}
