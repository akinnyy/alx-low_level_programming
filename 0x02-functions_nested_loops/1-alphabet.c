#include "main.h"

/**
 * print_alphabet-prints alphabet
 *
 * _putchar(): prints arg
 *
 * Return: always 0
 *
 * Return: always 0
 *
 */
char _putchar();

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
