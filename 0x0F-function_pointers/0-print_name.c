#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to string containing name
 * @f: function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
	f(name);
	}
}
