#include "main.h"
/**
 * _islower- main function
 *
 * @c : the character for comparison
 *
 * Return: 1 if true, 0 when false
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}	
