#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, sign = -1, num = 0, skim = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		while ((s[i] >= '0' && s[i] <= '9') && s[i])
		{
			num = (num * 10) - (s[i] - '0');
			skim = 1;
			i++;
		}
		if (skim)
		{
			num *= sign;
			break;
		}
	}
	return (num);
}
