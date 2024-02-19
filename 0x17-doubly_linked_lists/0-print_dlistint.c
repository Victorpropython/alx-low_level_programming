#include "lists.h"
/**
 * print_dlistint - a function that outputs dlistint_t elements
 * @h: A pointer to the begining of the linked list
 * Return: To return back numbers of nodes in the dlistint_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		num++;
		current = current->next;
	}
	return (num);
}
