#include "main.h"

/**
 * _isupper - print character in uppercase
 *
 * @c: value to be compared
 * Return: return 1 if uppercase otherwise return 0
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
