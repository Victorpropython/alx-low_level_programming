#include "lists.h"
/**
 *print_listint - function that prints all the elements
 *of a listint_t list
 *@listint_t: List of nodes in int
 *@h: Pointer to variable
 *Return: To return number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *point = h;
	size_t num = 0;

	while (point != NULL)
	{
	printf("%d\n", point->n);
	point += 1;
	point = point->next;
	}
	return (point);
}