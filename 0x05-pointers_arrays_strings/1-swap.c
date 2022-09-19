#include "main.h"

/**
 * swap_int -  The main function that swaps
 *
 * @a:The integer whose value is to be swapped
 *
 * @b:Second integer to be swapped with the first
 *
 * Return:Nothing
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;
	*a =  y;
	*b = x;
}
