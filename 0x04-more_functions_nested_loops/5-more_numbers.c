#include "main.h"

/**
 * more_numbers - prints 0 - 14, then new line
 * Return: Always void
 */
void more_numbers(void)
{
for (int i = 0; i <= 9; i++)
{
for (int n = 0; n <= 14; n++)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
}
_putchar('\n');
}

