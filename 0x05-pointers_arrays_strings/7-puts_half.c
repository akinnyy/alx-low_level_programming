#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - prints string in reverse
 *
 * @str:The input string
 *
 * Return:Nothing
 */
void puts_half(char *str)
{
	int j;

	for (j = 0; j < _strlen(str) / 2; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
