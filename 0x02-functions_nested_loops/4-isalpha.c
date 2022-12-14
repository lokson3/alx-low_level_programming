#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter
 * otherwise - return 0
 *
 * @c: value to be compared
 * Return: 1 if c is a letter other return 0
 */

int _isalpha(int c)
{
	if ((c >= 65) && (c <= 122))
		return (1);
	else
		return (0);
}
