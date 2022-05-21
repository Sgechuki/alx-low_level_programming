#include "stdio.h"
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return:
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
	if ((argv[2] == "/" || argv[2] == "%") && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(argv[2]) != NULL)
	{
		return (get_op_func(ch)(num1, num2));
	}
	printf("Error\n");
	exit(99);
}
