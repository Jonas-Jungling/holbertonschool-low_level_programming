#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name using a given function.
 * @name: The name to be printed.
 * @f: A pointer to a function that takes a char pointer as an argument.
 *
 * Description: This function takes a name and a function pointer as arguments.
 * The function pointer is used to print the name in a specific format defined
 * by the function pointed to by 'f'.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
