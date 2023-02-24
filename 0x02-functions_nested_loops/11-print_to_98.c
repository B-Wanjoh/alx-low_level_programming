#include <stdlib.h>
#include <stdio.h>

/* function prototype */
void print_to_98(int n);

/**
 * main - Entry point
 *
 * Return: (0)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 98; n++)
	{
		printf("%d, ", n);
	}

	printf("\n");
	return (0);
}
