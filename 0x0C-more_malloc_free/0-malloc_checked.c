#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - see description
 * Description: creates memory
 * @b: input parameter for malloc_checked
 * Return: the pointer to the result
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
