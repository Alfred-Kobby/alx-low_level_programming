#include "main.h"
/**
 * _strlen - see description
 * Description: returns the lenght of a string
 * @s: input parameter for _strlen function
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
