#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 *get_op_func - array of pointers to functions
 *@s: arithmetic operator
 *Return: pointer to relevant function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *(s))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
