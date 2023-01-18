#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 *
 * Return: 0
 */

int main(int argc, char **argv){
{
	char *s;

	s = argstostr(argc, argv);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);

	return (0);
}
