#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @x: - is the character to be checked
 * Return: last digit of x
 */
int print_last_digit(int x)
{
int result;

result = (x % 10);
if (x < 0)
{
result = (result * -1);
}
_putchar(result + '0');
return (result);
}
