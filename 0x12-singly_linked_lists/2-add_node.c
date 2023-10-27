#include "lists.h"
/**
 * *add_nodeint - function to add node from top
 * @head: listint_t type of node struct pointer to head
 * @n: const int type
 * Return: Always successful
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *top = NULL;

	top = malloc(sizeof(list_t));
	if (top == NULL)
		return (NULL);
	top->str = str;
	top->next = *head;
	*head = top;
	return (*head);
}
