#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * return: success, 1
 * error returns -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
