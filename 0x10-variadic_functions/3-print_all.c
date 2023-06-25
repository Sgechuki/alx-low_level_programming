#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: types of the variable arguements passed to function
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
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				ch = va_arg(ap, char *);
				if (!ch)
				{
					ch = "(nil)";
				}
				printf("%s%s", sep, ch);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	va_end(ap);
	printf("\n");
}
