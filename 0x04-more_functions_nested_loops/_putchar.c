#include <unistd>
/**
 *
 *
 */
int putchar(char c)
{
	return(write(1, &c, 1));
}
