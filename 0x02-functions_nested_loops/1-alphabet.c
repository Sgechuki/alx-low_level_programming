#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description - Program that prints "_putchar"
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/* function that prints the alphabet, in lowercase, followed by a new line*/
void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return;
}
