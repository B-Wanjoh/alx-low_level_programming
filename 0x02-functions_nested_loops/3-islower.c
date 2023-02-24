#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* function prototype */
int _islower(int c);

/**
 * main - Entering point
 *
 * Return: (0)
 */

int main(void)
{

	int c;

	c = islower('H');
	putchar(c + '0');

	c = islower('o');
	putchar(c + '0');

	c = islower(108);
	putchar(c + '0');

	putchar('\n');
	return (0);
}
