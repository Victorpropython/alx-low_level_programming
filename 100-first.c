#include <stdio.h>

void __attribute__((constructor)) victor(void);

/**
 * victor - Prints a string before the
 *   main function is executed.
 */
void victor(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
