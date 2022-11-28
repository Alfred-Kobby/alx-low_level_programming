#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - see description
 * Description: sum up all data in the linked list
 * @head: input parameter for sum_listint
 * Return: 0 or num
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
