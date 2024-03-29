#include <stdio.h>
#include "lists.h"
/**
 * list_len - function to print all elements
 * @h: list_t type of node struct
 * Return: Always successful
 */
size_t list_len(const list_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
