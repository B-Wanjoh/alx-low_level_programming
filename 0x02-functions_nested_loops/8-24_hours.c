#include <stdlib.h>
#include <stdio.h>
#include<time.h>

/* function prototype*/
void jack_bauer(void);

/**
 * main - Entry point
 *
 * Return: (0)
 */

int main(void)
{
	int t;
	int s;

	for (t = 00; t <= 23; t++)
	{
		for (s = 00; s <= 59; s++)
		printf("%d:%d\n", t, s);
	}
	return (0);
}
