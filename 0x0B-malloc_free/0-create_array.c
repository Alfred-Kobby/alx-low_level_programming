#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - see description
 * Description: creates an array and initialize it to specific char
 * @size: input parameter for create_array
 * @c: input parameter for create_array
 * Return: the pointer to the result
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
