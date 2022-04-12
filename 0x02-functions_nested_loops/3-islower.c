#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * Return: Always void.
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
