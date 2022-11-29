#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - see description
 * Description: reverse the linked list
 * @head: input parameter for reverse_listint
 * Return: linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	if (*head == NULL)
		return (NULL);
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
