#include "lists.h"
/**
 **add_nodeint - unction that adds a new node
 *at the beginning of a listint_t list.
 *@head: The head of the linked list
 *@n: interger variable
 *
 *Return: the address of the new node or null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tnode;

	tnode = malloc(sizeof(listint_t));
	if (tnode == NULL)
		return (NULL);
	tnode->n = n;
	tnode->next = *head;
	*head = tnode;
	return (tnode);
}
