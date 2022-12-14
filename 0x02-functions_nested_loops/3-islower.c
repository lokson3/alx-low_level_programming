#include "main.h"

/**
 * _islower - checks if a character is lowercase if Yes return 1
 * otherwise returns 0
 * @c: Is the value to be compared
 * Return: (0) Always
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
