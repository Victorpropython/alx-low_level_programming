#include "lists.h"
/**
 *listint_len - function that returns the number of elements
 *in a linked listint_t list.
 *@h: pointer to variable
 *Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
