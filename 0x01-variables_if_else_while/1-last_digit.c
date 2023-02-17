#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry piont
 *
 * Return: Always 0 (success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n",n,n % 10);
	elseif (n % 10 == 0)
                printf("Last digit of %d is %d and is greater than 5\n",n,n % 10);
	if (n % 10 > 5)
                printf("Last digit of %d is %d and is greater than 5\n",n,n % 10);
	return (0);
}
