#include "main.h"
/**
 * _pow_recursion - returns power of value
 * @x: integer to find its y power
 * @y: integer to raise x by
 * Return: power y of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
