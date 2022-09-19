#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - prints string in reverse
 *
 * @str:The input string
 *
 * Return:Nothing
 */
void puts2(char *str)
{
	int j;

	for (j = 0; j < _strlen(str); j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
