#include "main.h"
/**
 * more_numbers - To  print 10 times from one to fourteen
 *
 * Return: Always 0
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
}
}
_putchar('\n');
}
