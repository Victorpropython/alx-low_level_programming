#include <unistd.h>
/**
 *  *  * putchar - writes the character
 *   c
 *    *  to stdout
 *     *   *
 *      *    * @c: to write out the charcte
 *      r
 *       *     * Return: Always 1 success
 *        *      */
int _putchar(char c)

{
   return (write(1, &c,
						 1));
}
