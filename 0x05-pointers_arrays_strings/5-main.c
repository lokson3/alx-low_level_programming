#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0 ALways
 */

int main(void)
{
	char s[10] = "HAPPY";

	rev_string(s);

	printf("%s\n", s);
	return (0);
}

