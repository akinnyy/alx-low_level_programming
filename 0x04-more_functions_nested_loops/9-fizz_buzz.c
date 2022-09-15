#include <stdio.h>

/**
 * main - main function,prints the number and words
 *
 * Return:returns 0
 */
int main(void)
{
	int i;
	
	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
		} else
		{
			printf("%d",i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		_putchar("\n");
		return (0);
	}
}
