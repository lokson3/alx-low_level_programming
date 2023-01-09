#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - check the code
 *
 * Return: 0/
 *
 */

int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');

	if (buffer == NULL)
	{
		printf("faoled to allocate memeory\n");
		return (1);
	}
	free(buffer);
	return (0);
}
