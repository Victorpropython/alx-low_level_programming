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

	if (ptr != NULL)
		while (ptr->prev != NULL)
		{
			ptr = ptr->prev;
		}

	while ((tp = ptr) != NULL)
	{
		ptr = ptr->next;
		free(tp);
	}
}
