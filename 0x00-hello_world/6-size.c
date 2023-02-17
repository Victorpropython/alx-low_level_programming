#include <stdio.h>
/**
 * main - To print out the sizeof various data types
 *
 * Return: Always 0
 */

int main(void)
{
	char a;
	int b;
	float c;
	long int d;
	long long int f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));
	return (0);
}
