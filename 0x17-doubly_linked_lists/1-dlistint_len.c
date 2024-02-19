#include "lists.h"
/**
 * dlistint_len - To print the numbers in a linked list
 * @h: Used as pointer 
 * REturn: TO return the number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t ptr = 0;
	const dlistint_t *thead = h;

	while (thead != NULL)
	{
		ptr++;
		thead = thead->next;
	}
	return (ptr);
}

