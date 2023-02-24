#include <stdio.h>

/* function prototype */
void print_alphabet_x10(void);

/**
 * main - Entry point
 *
 * Return: (0)
 */

int main(void)
{
	char i;
	char j;

	for (i = 'q'; i <= 'z'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)

			putchar(j);


		putchar('\n');
	}
	return (0);
}
