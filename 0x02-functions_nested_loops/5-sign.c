#include "main.h"
/**
 * print_sign - To print the sign of numbers
 * @n: The checker for the numbers
 *
 * Return: can be positive negetive or zero
 */
int print_sign(int n)
{
	if (n > 0)
	{ _putchar('+');
		return (1);
	}
	else if (n < 0)
	{ _putchar('-');
		return (-1);
	}
	else
	{ _putchar('0');
		return (0);
	}
}
