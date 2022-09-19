#include "main.h"
#include "2-strlen.c"
/**
 * _puts - returns the length of any string
 *
 * @str:The string whose length is required
 *
 * Return:length o the string
 */
void _puts(char *str)
{
	int j;

	for (j = 0; *(str + j) != '\0'; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
