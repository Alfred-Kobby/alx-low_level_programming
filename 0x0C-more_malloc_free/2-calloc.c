#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - see description
 * Description: creates memory for array
 * @nmemb: input parameter for _calloc
 * @size: input parameter for _calloc
 * Return: the pointer to the result
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);
	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);
	for (; i < nmemb * size; i++)
		*(space + i) = 0;
	return (space);
}
