#include "main.h"
#include <stdio.h>

/**
 * _strlen - a fuction to print length of string
 * @s: string to be supplied
 * Return: 0 always
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] !=  '\0')
	{
		i++;
	}
	return (i);
}

