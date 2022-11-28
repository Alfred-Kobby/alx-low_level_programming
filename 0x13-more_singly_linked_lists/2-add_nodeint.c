#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - see description
 * Description: adds a node
 * @head: input parameter for add_nodeint
 * @n: input parameter for add_nodeint
 * Return: size of h
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
