#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: holds string
 * Return: Always void
 */
void puts2(char *str)
{
int cnt, i;

for (cnt = 0; *(str + cnt) != '\0'; cnt++)
{
}
for (i = 0; i < cnt;)
{
_putchar(*(str + i));
i = i + 2;
}
_putchar('\n');
}
