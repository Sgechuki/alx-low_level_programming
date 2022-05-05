#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of array to be created
 * @c: character to fill array
 * Return: NULL if fails or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	if (size == 0)
	{
		return (0);
	}
	ar = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
