#include <stdio.h>
#include "main.h"

/**
 *main - prints its name then newline
 * @argc: number of arguments used
 * @argv: array of the arguments used
 * Return: O (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
