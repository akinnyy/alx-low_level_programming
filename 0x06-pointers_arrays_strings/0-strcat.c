#include "main.h"

/**
 * *_strcat - main function that concatenates strings
 *
 * @dest:first string to be concatenated
 *
 * @src: second string to be concatenated
 *
 * Return: concatenated string
 *
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while(src[i] !='\0')
	{	
		dest = dest + sr[i];
		i++;
	}
	_putchar(dest);
	return(0);	
}
