#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - print if integer is positive or negative
 * @i: param
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
