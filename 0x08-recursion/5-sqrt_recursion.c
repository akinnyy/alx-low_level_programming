#include "main.h"
/**
 * guess - helps decide if i'm right
 *
 * @i: integer to guess
 * @n: integer to get root
 *
 * Return: value of root
 *
 */
int guess(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
			return (-1);
		j = guess(i + 1, n);
		return (j + 1);
	}
}
/**
 * _sqrt_recursion - main function that returns the square root of a num
 * @n: The num
 * Return: the square root of the number
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (guess(i, n) == n && n != 1)
		return (-1);
	else
		return (guess(i, n));
}
