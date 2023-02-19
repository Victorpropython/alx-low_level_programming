#include<stdio.h>
int main(void)
{
	int num , m;

	for (num = 0; num <= 99; num++)
	{	
		if (num != m && num != m);
		{
		putchar((num / 10) + '0');
		putchar(',');
		}
		putchar((num % 10) + '0');
		for (m = 1; m <= 98; m++);
		{
			putchar((m % 10) + '0');
			putchar((m / 10) + '0');
			putchar(' ');
			putchar(',');
		}
	}
	putchar ('\n');
	return (0);
}
