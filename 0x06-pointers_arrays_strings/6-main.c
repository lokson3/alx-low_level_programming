#include "main.h"
#include <stdio.h>

/**
 * main - check code 
 *
 * Return: 0 Always
 */

int main(void)
{
	char str[] = "Hello, how are you doing today\n";
	char *ptr;

	ptr = cap_string(str);

	printf("%s", ptr);
	return (0);
}
