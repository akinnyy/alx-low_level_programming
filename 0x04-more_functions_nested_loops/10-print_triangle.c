#include "main.h"

/**
 * print_triangle - prints the numbers
 *
 * @n:integer specifying the number of times to print char
 */
void print_diagonal(int size)
{
	int i;
	int j;
	int k;
	
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 1; i <= size; i++)
		{
			for(j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
