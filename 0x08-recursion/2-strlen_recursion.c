#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: char array to find its length
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	i = i + 1;
	if (*s == '\0')
	{
		return (i);
	}
	else
	{
		_strlen_recursion(s + 1);
	}
}
