#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	grid[0][3] = 98;
	grid[3][4] = 402;
	free_grid(grid, 4);
	return (0);
}
