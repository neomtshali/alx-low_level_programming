#include <unistd.h>
/**
 * _putchar -writes character c to stdout
 * @c: the character to print
 * return: on success 1
 * return: on error, -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
