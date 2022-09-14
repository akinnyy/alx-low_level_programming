#include "main.h"
/**
 * _isalpha-main function
 *
 * @c: character for comparison
 *
 * Return: 1 (success) , 0 (failure)
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
