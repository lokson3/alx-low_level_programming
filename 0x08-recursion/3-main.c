#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0
 */

int main(void)
{
	int r;

	r = factorial(1);
	printf("%d\n", r);

	r = factorial(5);
	printf("%d\n", r);

	r = factorial(-6);
	printf("%d\n", r);

	return (0);
}



