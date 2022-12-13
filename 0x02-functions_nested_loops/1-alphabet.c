#include "main.h"


/**
 * main - check code
 *
 * Return: (0) Always
 *
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();


	return (0);
}
/**
 * print_alphabet - print alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);

	}
	_putchar('\n');
}
