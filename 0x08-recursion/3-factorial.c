#include "main.h"

/**
 * factorial -main function that returns factorial of a given number
 *
 * @n: The given number
 *
 * Return: -1 (negative number), 1 ( null value), integer (positive number)
 *
 */
int factorial(int n)/*Returns the factorial of a given number*/
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
