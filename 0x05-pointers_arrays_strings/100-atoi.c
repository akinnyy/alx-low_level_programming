#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts string to integer
 *
 * @s: string to convert
 *
 * Return: returns integer value
 *
 */
int _atoi(char *s)
{
	int k;
	int np = 0;
	int c;
	int d = 1;
	int num = 0;

	for (k = 0; k < _strlen(s); k++)
	{
		if (!(s[k] >= '0' && s[k] <= '9') && c > 0)
			break;
		if (s[k] == '-')
			np--;
		if (s[k] == '+')
			np++;
		if (s[k] >= '0' && s[k] <= '9')
		{
			c++;
		}
	}
	while (c > 0)
	{
		num += ((s[k - 1] - '0') * d);
		k--;
		c--;
		d *= 10;
	}
	if (np >= 0)
	{
		num *= 1;
	} else
	{
		num *= -1;
	}
	return (num);
}
