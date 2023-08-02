#include "lists.h"
/**
 * pop_listint - function to remove node from top
 * @head: pointer to head node
 * Return: always successful
 */
int pop_listint(listint_t **head)
{
	listint_t *tnode = NULL;
	int result = 0;

	if (*head == NULL)
	{
		return (0);
	}
	tnode = *head;
	result = tnode->n;
	*head = tnode->next;
	free(tnode);
	return (result);
}
