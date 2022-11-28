#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - see description
 * Description: free linked list
 * @head: input parameter for add_nodeint_end
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;
	while (*head)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
