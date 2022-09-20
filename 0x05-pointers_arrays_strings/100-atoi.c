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
	int k = 0;
	int np = 0;
	int len = 0;
	int d = 0;
	int num = 0;
	int flo = 0;

	while (s[len] != '\0')
		len++;
	while (k < len && flo == 0)
	{
		if (s[k] == '-')
			++d;
		if (s[k] >= '0' && s[k] <= '9')
		{
			num = s[k] - '0';
			if (d % 2)
				num = -num;
			np = np * 10 + num;
			flo = 1;
			if (s[k+1] < '0' || s[k+1] > '9')
				break;
			flo = 0;
		}
		k++;


	}
	if (f == 0)
		return (0);
	return (n);
}
