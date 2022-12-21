#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0 Always
 */

int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);

	return (0);
}
