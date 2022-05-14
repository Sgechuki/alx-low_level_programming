#include "main.h"
#include <stdio.h>
int loop(char *s, int i);
int _strlen_recursion(char *s);

/**
 * loop - loops through string to determine whether palindrome
 * @s: string
 * @i: counter
 * Return: 1 if TRUE or 0 if FALSE
 */

int loop(char *s, int i)
{
	int j;

	j = _strlen_recursion(s) - 1;
	if (s[i] != s[j - i])
	{
		return (0);
	}
	else if (i == (j / 2) && s[i] == s[j - i])
	{
		return (1);
	}
	else
	{
		return (loop(s, i + 1));
	}
}
/**
 * is_palindrome - finds whether a string is a palindrome
 * @s: string
 * Return: 1 if true 0 if false
 */

int is_palindrome(char *s)
{
	if (s[0] == '\0')
	{
		return (1);
	}
	return (loop(s, 0));
}
/**
 * _strlen_recursion - returns length of string
 * @s: char array to find its length
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
