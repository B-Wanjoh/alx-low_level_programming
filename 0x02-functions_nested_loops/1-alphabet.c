#include <stdio.h>

/* function prototype*/
void print_alphabet(void);

/**
 * main - Entry point
 *
 * Return: (0)
 */

int main(void)
{

	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
