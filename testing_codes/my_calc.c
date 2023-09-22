#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int my_calc(int a,int b, int result)
{

	int i; 
	char ch[] = { '+', '-', '/', '*' , '%'};	

	
	while (i == 0 && ch[i] == '+')
	{
		result = a + b;
		printf("the answer is in sumation of %d and %d = %d\n",a,b,result);
	}
	else if (i == 1 && ch[i] == 1)
	{
		result = a-b;
		printf("the answer is in subtraction of %d and %d = %d\n",a,b,result);
	}
	else if (i == 2 && ch[i] == 2)
	{
		result = a*b;
		printf("the answer is in multiplication of %d and %d = %d\n",a,b,result);
	}
	else if (i == 3 && ch[i] == 3)
	{
		result = a/b;
		printf("the answer is in division of %d and %d = %d\n",a,b,result);
	}
	else if (i == 4 && ch[i] == 4)
	{
		result = a % b;
		printf("the answer is in modulus of %d and %d = %d\n",a,b,result);
		if (result != 0)
			printf("there is no modulus for these numbers");

	}
	else 
		return (0);

}
int main()
{
	int a, b,result;
	char ch[4];

	printf("input ur symbol\n");
	scanf("%c", &ch[4]);
	printf("input ur first  numbers for calculation\n");
	scanf("%d", &a);
	printf("input ur last numbers for calculations\n");
	scanf("%d", &b);
	result = 

	printf("%d",result);
	
	return (my_calc(a,b,result));

	return(0);
}
