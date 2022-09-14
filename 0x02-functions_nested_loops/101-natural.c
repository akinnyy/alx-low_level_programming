#include <stdio.h>
/**
 * main - main function
 *
 * @n: the integer whose multiple sum we need
 * Return: 0
 */
int main(void)
{
	int i, j;
        int sum3 = 0;
        int sum5 = 0;

	for (i = 0; i < 1024; i++)
	{
		for (j = 0; j < 1024; j++)
		{
			if (j % 5 == 0)
			{
				sum5 = j + sum5;
			} else if (i % 3 == 0)
			{
				sum3 = i + sum3;
			}
		}
	}
	printf("%d\n",(sum5+sum3));
	return (0);
}
