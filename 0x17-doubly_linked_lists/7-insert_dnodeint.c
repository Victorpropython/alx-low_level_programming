#include "lists.h"
/**
 * insert_dnodeint_at_index - To insert a new node at a given index
 * @h: Used as pointer to pointer variable
 * @idx: Index number
 * @n: the number that is position
 * Return: to return address of node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *newP = NULL;
	unsigned int i;

	newP = malloc(sizeof(dlistint_t));
	if (newP == NULL)
		return (NULL);
	if (n == 0)
	{
		newP->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = newP;
			*h = newP;
		}
		return (newP);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (ptr == NULL)
		{
			free(newP);
			return (NULL);
		}
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		free(newP);
		return (NULL);
	}
	newP->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = newP;

	ptr->next = newP;
	newP->prev = ptr;
	return (newP);
}
