#include "lists.h"
/**
 * sum_dlistint - To return the sum of all data (n) of a dlistint list
 * @head: The begining of a pointer
 * Return: To return the sum of the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;

	}
	return (sum);
}
