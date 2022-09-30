#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy- copies string
 *
 * @src:The input string
 *
 * @dest:The output string
 * Return:dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; j <= _strlen(src); j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
