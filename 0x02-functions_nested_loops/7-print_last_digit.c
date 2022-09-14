#include"main.h"
#include"6-abs.c"
/**
 * print_last_digit- The main function here
 * @n: the integer whose last digit is requested 
 *
 * Return: The last digit of integer n
 *
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
