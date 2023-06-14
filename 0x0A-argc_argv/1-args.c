#include <stdio.h>
#include "main.h"
/**
 * main - print number of arguments passed to programme
 * @argc: number of arguments
 * @argv: array of arguments
 * return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
