#include <stdio.h>

/**
 * main - main function,prints the number and words
 *
 * Return:returns 0
 */
int main(void)
{
	unsigned int t = 2;
	unsigned long n = 612852475143;

	while (t != n)
	{
		if (n % t == 0)
		{
			n  = n / t;
		} else
		{
			t++;
		}
	}
	printf("%lu\n", n);
	return (0);
}
