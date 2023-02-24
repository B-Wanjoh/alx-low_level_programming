#include <stdlib.h>
#include <stdio.h>

/* function prototype */
int _abs(int);

/**
 * main - entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	int j;

	j = abs(-1);
	printf("%d\n", j);

	j = abs(0);
	printf("%d\n", j);

	j = abs(1);
	printf("%d\n", j);

	j = abs(-98);
	printf("%d\n", j);

	return (0);
}

