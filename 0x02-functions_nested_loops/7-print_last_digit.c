#include "main.h"

/**
 * print_last_digit - print last digits of integer
 *
 * @n: value to be compared
 * Return: last digit of an integer
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = (n % 10);

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
