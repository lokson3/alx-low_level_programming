#include "main.h"

/**
 * _isdigit - check if character is a digit
 *
 * @c: value to be compared
 *
 * Return: return 1 is digit otherwise return 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
