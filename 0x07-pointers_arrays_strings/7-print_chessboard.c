#include "main.h"
/**
 *print_chessboard -  function that prints the chessboard.
 *@a: pointer to an array
 *
 *Return: Always (0) Success
 */
void print_chessboard(char (*a)[8])
{
	int m, n;

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
		{
			if (n == 7)
			{
				_putchar(a[m][n]);
				_putchar('\n');
			}
			else
				_putchar(a[m][n]);
		}
	}
}
