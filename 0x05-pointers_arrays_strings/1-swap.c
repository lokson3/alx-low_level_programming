#include "main.h"

/**
 * swap_int - swapsthe values of two integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{

	int c = *a;

	*a = *b;
	*b = c;
}
