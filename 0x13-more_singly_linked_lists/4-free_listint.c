#include "lists.h"
#include <stdio.h>
/**
 * free_listint - see description
 * Description: free linked list
 * @head: input parameter for add_nodeint_end
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
