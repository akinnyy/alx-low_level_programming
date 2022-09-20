#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - prints string in reverse
 *
 * @s:The input string
 *
 * Return:Nothing
 */
void _print_rev(char *s)
{
	int j,k, string;

	j = 0;
	while  (s[j] != '\0')
	{
		j++;
	}
	string = j;
	for (k = string - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
