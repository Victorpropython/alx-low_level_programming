#include "lists.h"
/**
 * delete_nodeint_at_index -function that deletes the node at index 
 * @index: is the index of the node that should be deleted.
 * @head: Head of node
 *
 * Return: to return 1 at success or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *old = NULL;
	
	if (*head ==NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (-1);
	}

	while (tmp != NULL && i < index)
	{
		old = tmp;
		tmp = tmp->next;
		i++;
	}
	if (i != index || tmp == NULL)
		return (-1);
	old->next = tmp->next;
	free(tmp);
	return(1);
}
