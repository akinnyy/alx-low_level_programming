#include "main.h"

/**
 * print_sign - main function
 *
 * @n: character for comparison
 *
 * Return: 1 for positives,0 if zero, -1 for negatives
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
