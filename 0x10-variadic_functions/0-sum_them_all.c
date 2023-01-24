#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum of arguments in a fuction
 *
 * @n: number of arguments
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list lists;

	unsigned int i;
	int sum = 0;


	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(lists, int);
	}
	va_end(lists);

	return (sum);
}

