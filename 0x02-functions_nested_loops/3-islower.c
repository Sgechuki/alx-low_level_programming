#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c - is the character to be checked
 * Return: Should return 1 if lowercase, 0 if otherwise
 */
int _islower(int c)
{
int result;
if (c >= 'a' && c <= 'z')
{
	result = 1;
}
else
{
	result = 0;
}
return (result);
}
