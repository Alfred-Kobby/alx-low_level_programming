#include "lists.h"
#include <stdio.h>
/**
 * list_len - see description
 * Description: return number elements of a linked list
 * @h: input parameter for list_len
 * Return: size of h
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
