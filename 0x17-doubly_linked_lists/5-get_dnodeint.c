#include "lists.h"
/**
 *get_dnodeint_at_index - To get the node at any index
 *@head: The head pointer of the node
 *@index: The index of the node to be gotten
 *Return: To return the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int num = 0;

	while (ptr != NULL)
	{
		if (num == index)
		{
			return (ptr);
		}
	num++;
	ptr = ptr->next;
	}
	return (NULL);
}

