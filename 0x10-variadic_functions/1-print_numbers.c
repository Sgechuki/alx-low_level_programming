#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers- print numbers followed by new line
 * @separator: pointer to delimiter
 * @n: number of integers passed to function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < (int) n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(ap, int));
		}
		else
		{
		printf("%d", va_arg(ap, int));
		if (i < (int) n - 1)
		{
			printf("%s", separator);
		}
		}
	}
	va_end(ap);
	printf("\n");
}
