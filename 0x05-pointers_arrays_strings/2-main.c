#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0 Always
 */

int main(void)
{
	char *str;
	int len;

	str = "hello, world!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
