#include "main.h"

/**
 * factorial - factorial of a number
 *
 * @n: parameter to be used
 * Return: factorial of the param
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
