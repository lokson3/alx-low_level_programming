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

	return (last_digit);
}
