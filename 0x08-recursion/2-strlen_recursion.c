#include "main.h"

/**
 * _strlen_recursion - main function that returns the length of a string
 *
 * @s: The string whose length is to be determined
 *
 * Return : length of the string
 *
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = _strlen_recursion(s + 1);
		return (n += 1);
	}
	return (0);
}
