#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - see description
 * Description: delete head node of linked list
 * @head: input parameter for pop_listint
 * Return: 0 or num
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}
