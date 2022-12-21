#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0 Always
 */

int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strncpy(s1, "hello world\n", 4);
	printf("%s\n", ptr);

	return (0);
}
