#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: - delimiter to separate strings
 * @n: number of strings passed to function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *ch;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < (int) n; i++)
	{
		ch = va_arg(ap, char *);
		if (!ch)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", ch);
		}
		if (i < (int) n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
