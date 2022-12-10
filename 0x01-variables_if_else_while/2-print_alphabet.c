#include <stdio.h>
#include <stdlib.h>

/**
 * main - print a to z
 *
 * Return: (0) Always(Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
