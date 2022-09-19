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
	int j;

	for (j = _strlen(s) - 1; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
