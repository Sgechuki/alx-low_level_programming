#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h;
	int i;
	long int j;
	long long int k;
	float l;
	h = 'H';
	i = 8;
	j = 8;
	k = 8;
	l = 3.14;
	printf("Size of an int: %d byte(s)", sizeof(h));
	printf("Size of an int: %d byte(s)", sizeof(i));
	printf("Size of an int: %d byte(s)", sizeof(j));
	printf("Size of an int: %d byte(s)", sizeof(k));
	printf("Size of an int: %d byte(s)", sizeof(l));
	return (0);
}


