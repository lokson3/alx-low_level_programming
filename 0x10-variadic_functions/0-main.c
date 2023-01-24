#include <stdio.h>
#include "variadic_functions.h"


/**
 * main - check the code
 *
 * Return: 0
 */

int main(void)
{
	int sum;

	sum = sum_them_all(4, 40, 20, 10, 30);
	printf("%d\n", sum);

	return (0);
}
