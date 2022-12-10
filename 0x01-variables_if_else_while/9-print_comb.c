#include <stdio.h>

/**
 * main - print number with comma and space
 *
 * Return: (0) Always
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
