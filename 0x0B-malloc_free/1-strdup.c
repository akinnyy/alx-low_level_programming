#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  The main function
 *
 * @str: string in new memory location
 *
 * Return: The value of the string
 */
char *_strdup(char *str)
{
	char *karat;

	if (str == NULL)
		return (NULL);
	karat = malloc(sizeof(str));
		karat = str;
	return (karat);
}
