#include <unistd.h>

/*
 * _putchar - Writing the character c to stdout
 * @c: The character to be printed
 *
 * Return: on succes 1
 * on erro, -1 is returned, and errno is set appropraiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
