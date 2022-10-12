#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - Prints the name passed
 *
 * @name: The given name
 * @f: The function to be printed
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
