#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0, plv = 0;

	for (i = 0; s[i]; i++)
	{
		while ((s[i] >= '0' && s[i] <= '9') && s[i])
		{
			if (i > 0 && s[i - 1] == '-')
			{
				sign *= -1;
			}
			if (plv == 0)
			{
				num = s[i] - '0';
				plv = 1;
			}
			else if (plv)
			{
				num = (num * 10) + (s[i] - '0');
			}
			i++;
		}
		if (plv == 1)
		{
			num *= sign;
			break;
		}
	}
	return (num);
}
