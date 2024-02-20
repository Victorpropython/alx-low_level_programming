#include "lists.h"
/**
 * add_dnodeint_end - To add a node at the end of a dlistint_t
 * @head: used as head pointer
 * @n: used for data variable pointer
 * Return: To return new element or NULL value
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *tp;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->prev = NULL;
	ptr->n = n;
	ptr->next = NULL;
	tp = *head;
	if (tp != NULL)
	{
		while (tp->next != NULL)
		{
			tp = tp->next;
		}
		tp->next = ptr;
	}
	else
		*head = ptr;

	ptr->prev = tp;
	return (ptr);
}
