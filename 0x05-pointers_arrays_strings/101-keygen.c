#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: 0 (Success)
 */
int main(void)
{
	int tot;
	char ch;

	srand(time(NULL));
	while (tot <= 2645)
	{
		ch = rand() % 128;
		tot += ch;
		putchar(ch);
	}
	putchar(2772 - tot);
	return (0);
}
