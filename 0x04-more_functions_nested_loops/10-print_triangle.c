#include "main.h"

/**
 * print_triangle - create triangle
 *
 * @size: parameter
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i;

	int j;

	int n = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			n--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
