#include <unistd.h>

/**
 * _putchar: Writes char c to the stdout
 * @c: Char to be printed out
 *
 *Return 1: On success
 *Return -1: On error and set error appropriately
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}
