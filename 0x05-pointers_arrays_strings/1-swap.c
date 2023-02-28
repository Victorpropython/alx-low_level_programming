#include "main.h"
/**
 * swap_int - To swap numbers
 * @*a: used as pionter variable
 * @*b: used as pionter variable
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int vict = *a;
	*a = *b;
	*b = vict;
}
