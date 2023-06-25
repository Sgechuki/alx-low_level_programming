#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: 0 on success or exit on fail
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *ch;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ch = argv[2];
	if ((*ch == '/' || *ch == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(ch) != NULL)
	{
		printf("%d\n", get_op_func(ch)(num1, num2));
		return (0);
	}
	printf("Error\n");
	exit(99);
}
