#include "main.h"
/**
 *set_string - function that sets the value of a pointer to a char.
 *@s: used as a double pointer
 *@to: pointer variable
 *
 *Return: value of a pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
