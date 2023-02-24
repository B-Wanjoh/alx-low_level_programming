#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* function prototype */
int print_last_digit(int);

/**
 * main - Entry point
 *
 * Return: (0)
 */

int main(void)
{
	int n;
	int print_last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	print_last_digit = (n % 10);

	printf("%d\n", print_last_digit);
}
