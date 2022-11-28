#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - see description
 * Description: returns the index of the node
 * @head: input parameter for get_nodeint_at_index
 * @index: input parameter for get_nodeint_at_index
 * Return: null or list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
