#include "main.h"
/**
 **infinite_add - Function that adds two numbers
 *@n1: variable to print iumber
 *@n2: pointer variable to print number
 *@r: char variable
 *@size_r: size of pointer for r
 *
 *Return: To return added number
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1 = 0, num2 = 0;

	while (*(n1 + num1++))
		;
	while (*(n2 + num2++))
		;
	if (num1 > size_r || num2 > size_r)
		return (0);
	printf("%d\n, %d\n", num1, num2);
	return (r);
}
