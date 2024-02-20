#include "lists.h"
/**
 * add_dnodeint - To add a node at the begining of a dlistint_t
 * @head: used for the begining of the node
 * @n: used for the data variable
 * Return: to address of new element or null if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	ptr->prev = NULL;
	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	ptr->prev = ptr;
	*head = ptr;
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (*head);
}
