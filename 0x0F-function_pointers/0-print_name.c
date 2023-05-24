#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name using a given function pointer
 * @name: String name
 * @f: Function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		exit(EXIT_FAILURE);

	f(name);
}
