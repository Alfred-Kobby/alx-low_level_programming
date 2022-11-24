#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * free_list - see description
 * Description: free node
 * @head: input parameter for free_list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}

