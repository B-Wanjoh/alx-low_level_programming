#include <stdlib.h>
#include <stdio.h>

/* function prototype */
int add(int, int);

/**
 * main - Entry point
 *
 * Return: (0)
 */

int main(void)
{
	int a = 20, b = 30, sum;

	sum = add(a, b);
	printf("sum is %d\n", sum);
}

/**
 * add - function prototype definition
 * a: variable
 * b: variable
 * Return: (a + b)
 */
int add(int a, int b)
{
	return (a + b);
}
