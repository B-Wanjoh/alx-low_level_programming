#include <stdio.h>
#include <ctype.h>

/* function prototye */
int print_sign(int n);

/**
 * main - Entry point
 *
 * Return: (0)
 */

int main(void)
{
	int n;

	n = print_sign(98);
	putchar(',');
	putchar(' ');
	putchar(n + '0');
	putchar('\n');
	n = print_sign(0);
	putchar(',');
	putchar(' ');
	putchar(n + '0');
	putchar('\n');
	n = print_sign(0xff);
	putchar(',');
	putchar(' ');
	putchar(n + '0');
	putchar('\n');
	n = print_sign(-1);
	putchar(',');
	putchar(' ');
	putchar(n + '0');
	putchar('\n');
	return (0);
}
