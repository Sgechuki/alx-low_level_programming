#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: holds string
 * Return: Always void
 */
void puts2(char *str)
{
int cnt, i;

for (cnt = 0; *(str + cnt) != '\0'; cnt = cnt + 2)
{
}
for (i = 0; i < cnt; i++)
{
_putchar(*(str + cnt));
}
_putchar('\n');
}
