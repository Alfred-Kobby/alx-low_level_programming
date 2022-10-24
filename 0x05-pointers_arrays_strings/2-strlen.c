#include "main.h"
/**
 * _strlen - see description
 * Description: returns the lenght of a string
 * @n: input parameter for _strlen function
 * Return: lenght of string
 */
int _strlen(char *n)
{
	int i = 0;

	while (*(n + 1) != '\0')
		i++;
	return (i);
}
