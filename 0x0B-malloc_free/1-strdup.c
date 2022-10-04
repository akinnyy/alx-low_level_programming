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
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
		j++;
	karat = malloc(sizeof(char) * j + 1);
	if (karat == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		karat[i] = str[i];
	return (karat);
}
