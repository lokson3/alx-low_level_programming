#include <stdio.h>

/**
 * main - print lowerchase character in reverse
 *
 * Return: (0) Always
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
