#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - main function
 *
 * @b:value to be allocated memory for
 *
 * Return: Pointer  (success) , 98 (failure)
 */
void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		return (98);
	return (t);
	free(t);
}
