#include "lists.h"

/**
 *add_nodeint_end - adds a node to the end of a linked list
 *@head: pointer to the head of the list
 *@n: number to be used as content
 * *Return: address of the newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tnode;
	listint_t *point = *head;

	tnode = malloc(sizeof(listint_t));
	if (tnode != NULL)
	{
		tnode->n = n;
		tnode->next = NULL;
	}
	else
		return (NULL);
	if (point != NULL)
	{
		while (point->next != NULL)
			point = point->next;

		point->next = tnode;
	}
	else
		*head = tnode;
	return (tnode);
}
