#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format:
 *
 */
void print_all(const char * const format, ...)
{
	int i;
	char *ch;
	char *sep = "";
	va_list ap;

	i = 0;
	va_start(ap, format);
	while (format && format[i])
	{
		printf("%s", sep);
		sep = ", ";
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				ch = va_arg(ap, char *);
				if (!ch)
				{
					ch = "(nil)";
				}
				printf("%s", ch);
				break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
