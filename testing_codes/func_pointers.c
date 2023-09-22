#include <stdio.h>
void fun(int a)
{
	printf("the number of a is %d\n", a);
}
int main()
{
	void (*fun_ptr)(int) = fun;
	fun_ptr(10);
	return (0);
}
