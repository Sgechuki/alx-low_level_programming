#include "main.h"
/**
 * print_alphabet_x10  - function that prints 10 times the alphabet
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
int i;

char ch;

for (i = 0; i <= 9;)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
i++;
_putchar('\n');
}
}
