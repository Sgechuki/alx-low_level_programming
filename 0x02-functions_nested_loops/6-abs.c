#include "main.h"
/**
 * abs - computes absolute value of a number
 * @n: - is the character to be checked
 * Return: Always 0
 */
int _abs(int n)
{
if ( n >= 0)
{
	_putchar(n);
}
else if (n <= 0)
{
	int sum = (0 - n);
	_putchar(sum);
}
return (0);
}
