#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: Always void
 */
void times_table(void)
{
int i, x;

for (i = 0; i <= 9; i++)
{
for (x = 0; x <= 9; x++)
{
int result;
result = ( i * x );
if (x != 9)
{
_putchar(result);
_putchar(',');
_putchar(' ');
}
else
{
_putchar(result);
}
}
}
}

