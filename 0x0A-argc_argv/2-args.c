#include <stdio.h>
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
	int i;

	for (i = 1; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
