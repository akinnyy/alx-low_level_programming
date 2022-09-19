#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints string in reverse
 *
 * @str:The input string
 *
 * Return:Nothing
 */
void puts_half(char *str)
{
	int j;
	int err = 0;

	if (_strlen(str) % 2 != 0)
	{
		err += 1;
	}
	for (j = _strlen(str + err) / 2; j <= _strlen(str); j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
