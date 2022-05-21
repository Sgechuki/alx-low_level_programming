#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: First int
 * @b: Second int
 * Return: addition of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two integers
 * @a: First int
 * @b: Second int
 * Return: substraction result of b from a
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a:First number
 * @b: Second number
 * Return: multiplication result of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers
 * @a: First number
 * @b: Second number
 * Return: division result of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of division
 * @a: First number
 * @b: Second number
 * Return: remainder after dividing a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
