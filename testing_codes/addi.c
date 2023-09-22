#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, result;
	
	printf("input ur digits\n");
	scanf("%d", &a);
	printf("input the second digit\n");
	scanf("%d", &b);
	result = a + b;
	printf("the sum of the %d, plus %d is : %d\n", a,b,result);

	return(0);
}
