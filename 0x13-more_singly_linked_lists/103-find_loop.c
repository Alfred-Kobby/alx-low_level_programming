#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - see description
 * Description: find loop linked list
 * @head: input parameter for find_listint_loop
 * Return:size_t
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head, *two = head;

	while (one && two && two->next)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
		{
			return (one);
		}
	}
	return (NULL);
}
