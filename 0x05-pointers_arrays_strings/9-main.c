#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0
 */

int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "hello world\n");
	printf("%s", s1);
	printf("%s", ptr);

	return (0);
}
