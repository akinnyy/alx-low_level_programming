#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array -  The main function that create array
 *
 * @size: size of the array
 *
 * @c: the character
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int  i;
	char karat;

	if (size <= 0)
		return (NULL);
	karat = malloc(sizeof(char) * size);
	if (karat == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		karat[i] = c;
	return (karat);
}
