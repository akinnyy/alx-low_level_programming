#include "main.h"

/**
 * _isalpha-Test the _isalpha function
 *
 * @c: number to pass to _isalpha function
 *
 */
void _isalpha(int c)
{
	int r;

	r = _isalpha(c);
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
	_isalpha('H');
	_isalpha('o');
	_isalpha(108);
	_isalpha(';');
	return(0);
}

