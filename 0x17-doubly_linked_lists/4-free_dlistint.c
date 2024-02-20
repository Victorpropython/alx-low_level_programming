#include "lists.h"
/**
 * free_dlistint - To free a doubly link list
 * @head: The head pointer variable
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	dlistint_t *tp;

	while (ptr != NULL)
	{
		tp = ptr->next;
		free(ptr);
		ptr = tp;
	}
	free(tp);
}
