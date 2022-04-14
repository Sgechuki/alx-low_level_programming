#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c - is the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
int result;

if (c >= 'A' && c <= 'Z')
{
	result = 1;
}
else
{
	result = 0;
}
return (result);
}
