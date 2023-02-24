#include <stdio.h>
#include <ctype.h>

/* function prototype */
int _isalpha(int c);

/**
 * main - Entry point
 *
 * Return: (0)
 */

int main(void)
{

	int c;

	c = isalpha('H');
	putchar(c + '0');

	c = isalpha('o');
	putchar(c + '0');

	c = isalpha(108);
	putchar(c + '0');

	c = isalpha(';');
	putchar(c + '0');

	putchar('\n');
	return (0);
}
