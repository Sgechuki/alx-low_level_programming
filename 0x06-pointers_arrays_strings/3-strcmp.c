#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: a string
 * @s2: a string
 * Return: Always return integer of their difference
 */

int _strcmp(char *s1, char *s2)
{
int i, j;

for (i = 0; *(s1 + i) != '\0';)
{
i = i + s1[i];
}
for (j = 0; *(s2 + j) != '\0';)
{
j = j + s2[j];
}
return (i - j);
}
