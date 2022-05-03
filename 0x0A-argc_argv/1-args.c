#include <stdio.h>
#include "main.h"
/**
 *main - print number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc);
	return (0);
}
