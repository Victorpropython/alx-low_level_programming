#include "lists.h"
/**
 * insert_nodeint_at_index - function to insert node at nth location
 * @head: pointer to head of struct listint_t type
 * @idx: unsigned int for location to add node
 * @n: int type for value of new node
 * Return: always successful
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = NULL;
	listint_t *tmp = NULL;
	unsigned int num = 0;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node ==  NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	tmp = *head;
	if (tmp == NULL)
	{
		*head = node;
		node->next = NULL;
		return (node);
	}
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (num != (idx - 1))
	{
		tmp = tmp->next;
		num++;
		if (tmp == NULL)
		{
			free(node);
			return (NULL);
		}
	}
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
