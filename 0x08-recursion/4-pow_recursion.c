#include "main.h"

/**
 * _pow_recursion - main function that returns int x raised to int y
 *
 * @x: The base number
 * @y: The power number
 *
 * Return: the value of x raised to y
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
