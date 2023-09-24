#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to print all elements
 * @h: listint_t type of node struct
 * Return: Always successful
 */
size_t print_list(const list_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		/*printf("%d\n", h->next);*/
		h = h->next;
		count++;
	}
	return (count);
}
