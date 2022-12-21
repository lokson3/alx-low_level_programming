#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0 Always
 */

int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	reverse_array(a, sizeof(a) / sizeof(int));
	return (0);
}
