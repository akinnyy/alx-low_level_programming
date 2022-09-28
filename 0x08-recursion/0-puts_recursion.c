#include "main.h"

/**
 * _puts_recursion - main function that recursively prints strings
 *
 * @s: The string to be printed
 *
 * Return : Nothing
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
