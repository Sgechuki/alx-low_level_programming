#include "main.h"

/**
 * _puts - prints a string string
 * @str: variable holding string
 * Return: Always void
 */
void _puts(char *str)
{
int i;

for (i = 0; *(str + i) != '\0'; i++)
{
write(1, *(str + i), 1);
}
write(1,'\n', 1);
}
