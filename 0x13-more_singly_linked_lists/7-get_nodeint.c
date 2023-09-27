#include "lists.h"
/**
 * get_nodeint_at_index - function to return index of node
 * @index: index of node to be returned
 * @head: pointer to head of node
 * Return: always successful
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int num;

	if (head == NULL)
		return (NULL);
	num = 0;
	while (head != NULL)
	{
		if (index == num)
		{
			tmp = head;
			return (tmp);
		}
		num++;
		head = head->next;
	}
	return (NULL);
}

