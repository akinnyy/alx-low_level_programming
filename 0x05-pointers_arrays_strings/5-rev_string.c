#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - prints string in reverse
 *
 * @s:The input string
 *
 * Return:Nothing
 */
void rev_string(char *s)
{
	int j;
	char k;

	for (j = 0; j < _strlen(s) / 2; j++)
	{
		k = s[j];
		s[j] = s[_strlen(s) - j - 1];
		s[_strlen(s) - j - 1] = k;
	}
}
