#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * @argc: argument c
 *
 * @argv: vector of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc != 3)
		printf("Error\n");
	return (1);
	else
	{
		sum = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", sum);
	}
	return (0);
}
