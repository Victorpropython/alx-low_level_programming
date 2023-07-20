#include "function_pointers.h"
/**
 *print_name - function to print a name
 *@name: pointer to variable
 *@f: pointer to function to print name
 *
 *Return: Always 0 success.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}


