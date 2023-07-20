#include "function_pointers.h"
/**
 *array_iterator - To execute a function given as a parameter on
 *each element of an array
 *@array: Array name
 *@size: size of array in bytes
 *@action: pointer to function
 *
 *Return: Alaways 0 success
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
