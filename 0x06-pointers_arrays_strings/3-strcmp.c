#include "main.h"
/**
 * _strcmp - compares two strings lexicographically
 * @s1: a string
 * @s2: a string
 * Return: Always 0 if equal or difference
 */

int _strcmp(char *s1, char *s2)
{
int i, j = 0;

for (i = 0; *(s1 + i) != '\0' && j == 0;)
{
j = s1[i] - s2[i];	
i++;
}
return (j);
}
