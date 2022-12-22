#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0 Always
 */


int main(void)
{
	char s[] = "Hello, world\n";
	char *p;

	p = rot13(s);
	printf("%s", p);

	return (0);
}

