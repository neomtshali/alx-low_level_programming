#include <stdio.h>
#include "main.h"
/**
 * mian - prints the name of the programme
 * @argc: number of arguments
 * reurn: laways 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
