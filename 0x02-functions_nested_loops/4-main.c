#include "main.h"

/**
 * test_isalpha-Test the _isalpha function
 *
 * @n: number to pass to _isalpha function
 *
 */
void test_isalpha(int n)
{
	int r;

	r = test_isalpha(n);
	_putchar(r + '0');
	_putchar('\n');
}

/**
 * main -check the code for the  Main file
 *
 * Return:Always 0
 */
int main(void)
{
	test_isalpha('H');
	test_isalpha('o');
	test_isalpha('108');
	test_isalpha(';');
	return(0);
}

