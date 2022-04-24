#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: a string
 * @s2: a string
 * Return: 0 if equal, j if different
 */

int _strcmp(char *s1, char *s2)
{
int i; 
int j = 0;

for (i = 0; *(s1 + i) != '\0' && j == 0;)
{
j = s1[i] - s2[i];	
i++;
}
return (j);
}
