#include <stdio.h>
#include <stdlib.h>

/* function prototype */
void times_table(void);

/**
 * main - Entry point
 *
 * Return: (0)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		printf("%d * %d), ", i, j);
	}

	printf("\n");
	return (0);
}
