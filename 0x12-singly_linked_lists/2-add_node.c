#include "lists.h"
#include <stdio.h>
/**
 * add_node - see description
 * Description: add node
 * @head: input parameter for add_node
 * @str: input parameter for add_node
 * Return: linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
