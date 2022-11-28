#include "lists.h"
#include <stdio.h>
/**
 * print_listint - see description
 * Description: prints all elements of a linked list
 * @h: input parameter for print_list
 * Return: size of h
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
