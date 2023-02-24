#include <unistd>
/**
 *_putchar - use to print a charaacter
 * @c: use as a variable
 *Return: 0 k
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
