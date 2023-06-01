#include <stdio.h>

void __attribute__((constructor)) first(void);

/**
 * first - Prints a sentence before executing the main function.
 *
 * Description: The 'constructor' marks the function attribute
 * which is executed automatically before the function 'main'.
 * and prints the given statement before output.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
