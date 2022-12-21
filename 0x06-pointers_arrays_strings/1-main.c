#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	char s1[98] = "Hello";
	char s2[] = " World!\n";
	char *ptr;

	ptr = _strncat(s1, s2, 1);
	printf("%s", ptr);

	return (0);
}
