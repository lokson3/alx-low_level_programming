#include "main.h"
#include <stdio.h>

/**
 * main - execute code
 * Return: 0 always
 */

int main(void)
{
	int a;

	a = 80;

	printf("a = %d\n", a);

	reset_to_98(&a);

	printf("a = %d\n", a);
	return (0);
}
