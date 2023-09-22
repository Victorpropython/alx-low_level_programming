#include <stdio.h>

void add(int a, int b)
{
	printf("for addition %d\n",a+b);
}
void subtract(int a, int b)
{
	printf("for subtraction %d\n",a-b);
}
void multiply(int a, int b)
{
	printf("for multiplication %d\n",a*b);
}
void division(int a, int b)
{
	printf("for division %d\n",a/b);
}
int main()
{
	void (*fun_arr[])(int , int) = {add, subtract, multiply, division};
	unsigned int ch, a =15, b = 10;

	printf("Enter your choice from: 0 for add, 1 for subtract, 2 for"
		       "multiplication and 3 for division\n");
	scanf("%d",&ch);
	
	if (ch > 3)
		printf("It should not be greater than 3\n");
		return(0);
	(*fun_arr[ch])(a,b);

	return (0);
}
