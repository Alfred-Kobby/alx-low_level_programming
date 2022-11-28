#include "lists.h"
#include <stdio.h>
/**
 * listint_len - see description
 * Description: returns the number of elements of a linked list
 * @h: input parameter for print_list
 * Return: size of h
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
