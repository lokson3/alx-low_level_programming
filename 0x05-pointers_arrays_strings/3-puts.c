#include "main.h"
#include <stdio.h>

/**
 * _puts - function taht prints a string, followed by a new line, to stdout
 * @str: pointer value
 * Return: Always 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
