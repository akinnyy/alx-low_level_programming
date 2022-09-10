#include <stdio.h>
/**
 * main entry point '------- Print the Alphabet-----------'
 *
 * Return: alway return 0
 *
 */
int main(void)
/*Declaration of Characters required for the function */
{       
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
