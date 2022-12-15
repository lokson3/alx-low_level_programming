#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 *
 */

void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if ((c == '4') || (c == '2'))
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
