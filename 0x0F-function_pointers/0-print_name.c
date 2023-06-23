#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A function pointer to a function that takes a char* parameter and returns void.
 *
 * Description: This function takes a name and a function pointer as parameters.
 *              It checks if the name and function pointer are not NULL.
 *              If they are valid, it calls the function pointed by the function pointer,
 *              passing the name as an argument to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
